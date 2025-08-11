/* locate a character int the string
char * my_strchr(char *,char);  */


#include<stdio.h>
char * my_strchr(char *,char);
void main()
{
char s[40],ch,*p;
printf("enter any string and character to search\n");
scanf("%[^\n]",s);
scanf(" %c",&ch);

printf("s=%s\n",s);
p=my_strchr(s,ch);

printf("p=%s\n",p);


}
char * my_strchr(char *s,char ch)
{
	if(*s)
	{
		if(*s==ch)
			return s;
		else 
		{	s++;
                my_strchr(s ,ch);
		}
	}
	else
		return 0;




}
