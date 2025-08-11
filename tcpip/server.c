#include"header.h"

struct sockaddr_in c_addr;
void client_info()
{
printf("client port num=%d\n",ntohs(c_addr.sin_port));
printf("client ip=%s\n",inet_ntoa(c_addr.sin_addr));
}

void main(int argc,char **argv)
{
if(argc!=3)
{
printf("Usage:port_addr,ip_addr\n");
return;
}

int sfd,len,len1;
/*socket*****************/
sfd=socket(AF_INET,SOCK_DGRAM,0);
if(sfd<0)
{
perror("socket");
return;
}
printf("sfd=%d\n",sfd);
client_info();

/******bind*************/
struct sockaddr_in s_addr;
s_addr.sin_family=AF_INET;
s_addr.sin_port=htons(atoi(argv[1]));
s_addr.sin_addr.s_addr=inet_addr(argv[2]);

len1=sizeof(s_addr);
len=bind(sfd,(struct sockaddr*)&s_addr,len1);

if(len<0)
{
perror("Bind");
return;
}
printf("bind=%d\n",len);

/*****recive************/
char s[20];
recvfrom(sfd,s,sizeof(s),0,(struct sockaddr *)&c_addr,&len1);
printf("in server string=%s\n",s);
/********sendto***********/
sendto(sfd,s,strlen(s)+1,0,(struct sockaddr *)&s_addr,len1);

close(sfd);
}
