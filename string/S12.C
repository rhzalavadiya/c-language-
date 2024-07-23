#include<stdio.h>
#include<conio.h>
int Palindrom(char *s)
{
	int i,len=strlen(s);
	for(i=0;i<len/2;i++)
	{
		if(s[i]!=s[len-1-i])
			return 0;
	}
	return 1;
}
void main()
{
	char s[50];
	clrscr();
	printf("Enter The Any String....");
	gets(s);
	if(Palindrom(s))
		printf("\nPalindrom string");
	else
		printf("\nNot Palindrom String");
	getch();
}