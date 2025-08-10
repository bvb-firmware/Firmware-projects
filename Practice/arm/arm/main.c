/// C library headers
#include <stdio.h>
#include <string.h>
#include <time.h>

// Linux headers
#include <fcntl.h> // Contains file controls like O_RDWR
#include <errno.h> // Error integer and strerror() function
#include <termios.h> // Contains POSIX terminal control definitions
#include <unistd.h> // write(), read(), close()

int main()
{
	FILE *fp,*dp;
	// Open the serial port. Change device path as needed (currently set to an standard FTDI USB-UART cable type device)
	while(1)
	{
		fp=fopen("database","a+");
		dp=fopen("log","a");
		int serial_port = open("/dev/ttyUSB0", O_RDWR);

		// Create new termios struct, we call it 'tty' for convention
		struct termios tty;

		// Read in existing settings, and handle any error
		if(tcgetattr(serial_port, &tty) != 0) {
			printf("Error %i from tcgetattr: %s\n", errno, strerror(errno));
			return 1;
		}

		tty.c_cflag &= ~PARENB; // Clear parity bit, disabling parity (most common)
		tty.c_cflag &= ~CSTOPB; // Clear stop field, only one stop bit used in communication (most common)
		tty.c_cflag &= ~CSIZE; // Clear all bits that set the data size 
		tty.c_cflag |= CS8; // 8 bits per byte (most common)
		tty.c_cflag &= ~CRTSCTS; // Disable RTS/CTS hardware flow control (most common)
		tty.c_cflag |= CREAD | CLOCAL; // Turn on READ & ignore ctrl lines (CLOCAL = 1)

		tty.c_lflag &= ~ICANON;
		tty.c_lflag &= ~ECHO; // Disable echo
		tty.c_lflag &= ~ECHOE; // Disable erasure
		tty.c_lflag &= ~ECHONL; // Disable new-line echo
		tty.c_lflag &= ~ISIG; // Disable interpretation of INTR, QUIT and SUSP
		tty.c_iflag &= ~(IXON | IXOFF | IXANY); // Turn off s/w flow ctrl
		tty.c_iflag &= ~(IGNBRK|BRKINT|PARMRK|ISTRIP|INLCR|IGNCR|ICRNL); // Disable any special handling of received bytes

		tty.c_oflag &= ~OPOST; // Prevent special interpretation of output bytes (e.g. newline chars)
		tty.c_oflag &= ~ONLCR; // Prevent conversion of newline to carriage return/line feed
		// tty.c_oflag &= ~OXTABS; // Prevent conversion of tabs to spaces (NOT PRESENT ON LINUX)  // tty.c_oflag &= ~OXTABS; // Prevent conversion of tabs to spaces (NOT PRESENT ON LINUX)
		// tty.c_oflag &= ~ONOEOT; // Prevent removal of C-d chars (0x004) in output (NOT PRESENT ON LINUX)

		tty.c_cc[VTIME] = 10;    // Wait for up to 1s (10 deciseconds), returning as soon as any data is received.
		tty.c_cc[VMIN] = 12;

		// Set in/out baud rate to be 9600
		cfsetispeed(&tty, B9600);
		cfsetospeed(&tty, B9600);

		// Save tty settings, also checking for error
		if (tcsetattr(serial_port, TCSANOW, &tty) != 0) {
			printf("Error %i from tcsetattr: %s\n", errno, strerror(errno));
			return 1;
		}


		// Write to serial port
		// unsigned char msg[50] ={'v','e','c','t','o','r','\n'};
		// write(serial_port, msg, sizeof(msg));
		// int i;
		// usleep(100);
		// Allocate memory for read buffer, set size according to your needs
		char read_buf [256];

		// Normally you wouldn't do this memset() call, but since we will just receive
		// ASCII data for this example, we'll set everything to 0 so we can
		// call printf() easily.
		memset(&read_buf, '\0', sizeof(read_buf));

		// Read bytes. The behaviour of read() (e.g. does it block?,
		// how long does it block for?) depends on the configuration
		// settings above, specifically VMIN and VTIME
		int num_bytes = read(serial_port, &read_buf, sizeof(read_buf));

		// n is the number of bytes read. n may be 0 if no bytes were received, and can also be -1 to signal an error.
		if (num_bytes < 0) {
			printf("Error reading: %s", strerror(errno));
			return 1;
		}

	//	fprintf(fp,"%s\n",read_buf);
	//	  fclose(fp);
		  //printf("%s\n",read_buf);

		int i,l=0,len=0,l1=0,j,flag=0;
		char ch;
		while((ch=fgetc(fp))!=-1)
		{ 
			l1++;
			if(ch=='\n')
			{
				l++;
				if(l1>len)
					len=l1;
				l1=0;
			}

		}
		rewind(fp);
		//printf("len=%d l= %d\n",len,l);
		char s1[len-11],s2[25],s[100];
		for(i=0;i<l;i++)
		{
			fscanf(fp,"%s",s);
			j=strcmp(s,read_buf);
			if(j==0)
			{
				time_t t;
				time(&t);
				strcpy(s2,ctime(&t));		
				printf("\033[32;1mEmployee id found & marked the attendence\n\033[0m");
				fgets(s1,len,fp);
				fprintf(dp,"%s %s %s\n",read_buf,s1,s2);
				flag=1;
				
			}
			//printf("s=%s s1=%s j=%d\n",s,s1,j);


			while((ch=fgetc(fp)) && j!=0)
			{

				if(ch=='\n'|| ch==EOF)
					break;
			}
			

		}
		if(flag==0)
		{
		//char s[100];
		time_t t;
		time(&t);
		strcpy(s2,ctime(&t));		
		printf("\033[31;1;5mEmpolyee ID not found\n\033[0m");
		printf("\033[36;1mEnter the details name,designation,age and gender to add\n\033[0m");
		scanf(" %[^\n]",s);
		fprintf(fp,"%s %s\n",read_buf,s);
		fprintf(dp,"%s %s %s\n",read_buf,s,s2);
		}
		fclose(dp);
		fclose(fp);		
		close(serial_port);
	}
}

