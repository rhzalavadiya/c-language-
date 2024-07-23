#include<stdio.h>
#include<conio.h>
int Strcmp(char *s,char *s1)
{
	while(*s!='\0' && *s1!='\0')
	{
		if(*s!=*s1)
		{
			return 0;
		}
		s++;
		s1++;
	}
	if(*s=='\0' && *s1=='\0')
		return 1;
	return 0;
}
void main()
{
	char s[50],s1[50];
	clrscr();
	printf("Enter first string....");
	gets(s);
	printf("Enter second string....");
	gets(s1);
	if(Strcmp(s,s1))
		printf("\nBoth are Equal...");
	else
		printf("\nBoth are Diffrent...");
	getch();
}