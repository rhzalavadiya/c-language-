#include<stdio.h>
#include<conio.h>
void Count(char *s)
{
	int upper=0,lower=0,special=0,num=0;
	while(*s)
	{
		if(*s>='A'&& *s<='Z')
			upper++;
		else if(*s>='a'&& *s<='z')
			lower++;
		else if(*s>='0'&&*s<='9')
			num++;
		else
			special++;
		s++;
	}
	printf("\nUpper :- %d, Lower :- %d, Number :- %d, Special :- %d",upper,lower,num,special);
}
void main()
{
	char s[50];
	clrscr();
	printf("Enter any string....");
	gets(s);
	Count(s);
	getch();
}