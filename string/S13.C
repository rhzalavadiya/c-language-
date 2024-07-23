#include<stdio.h>
#include<conio.h>
void Append(char *s,char *a)
{
	while(*s)
		s++;
	while(*a)
	{
		*s=*a;
		s++;
		a++;
	}
	*s='\0';
}
void main()
{
	char s[50];
	char a[50];
	clrscr();
	printf("Enter any string....");
	gets(s);
	printf("\nEnter Append String....");
	gets(a);
	Append(s,a);
	printf("\nNew String is....%s",s);
	getch();
}