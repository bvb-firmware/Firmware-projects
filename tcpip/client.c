#include"header.h"

void main(int argc,char **argv)
{
if(argc!=3)
{
printf("Usage:./a.out portnum ipaddr\n");
return;
}

int sfd,len,b;
char s[20];
struct sockaddr_in c_addr;

/*****socket***********/
sfd=socket(AF_INET,SOCK_DGRAM,0);
if(sfd<0)
{
perror("SOcket");
return;
}

/**********bind**********/


/**********sendto***********/
c_addr.sin_port=htons(atoi(argv[1]));
c_addr.sin_port=AF_INET;
c_addr.sin_addr.s_addr=inet_addr(argv[2]);

printf("enter any string\n");
scanf("%s",s);
len=sizeof(c_addr);
sendto(sfd,s,strlen(s)+1,0,(struct sockaddr *)&c_addr,len);
recvfrom(sfd,s,sizeof(s),0,(struct sockaddr *)&c_addr,&len);
printf("in clinet recevied string=%s\n",s);
close(sfd);
}






