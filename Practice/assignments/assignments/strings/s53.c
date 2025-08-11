#include<stdio.h>
void asci_str(char *,int *);
void main()
{
char s[40]="12fsb 31b h13";
printf("%s\n",s);
int t=0,*p=&t;
asci_str(s,p);
printf("count=%d\n",*p);

}
void asci_str(char *s,int *p)
{
int i;
for(i=0;s[i];i++)
{
//if(s[i]>='0' && s[i]<='9')
//(*p)++;
printf("%c---> %d  %x  %o\n",s[i],s[i],s[i],s[i]);

}
}
