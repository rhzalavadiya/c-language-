#include<stdio.h>
#include<conio.h>
void Charcter(char *s)
{
	while(*s)
	{
		if(*s>='a'&&*s<='z')
			*s-=32;
		else if(*s>='A'&&*s<='Z')
			*s+=32;
		s++;
	}
}
void main()
{
	char s[50];
	clrscr();
	printf("Enter any string....");
	gets(s);
	Charcter(s);
	printf("After convert..%s",s);
	getch();
}