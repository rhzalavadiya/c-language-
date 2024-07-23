#include<stdio.h>
#include<conio.h>
void Strcpy(char *des,char *source)
{
	while(*source!='\0')
	{
		*des=*source;
		source++;
		des++;
	}
}
void main()
{
	char s[50],des[50];
	clrscr();
	printf("Enter any string....");
	gets(s);
	Strcpy(des,s);
	printf("string coppied...");
	puts(des);
	getch();
}