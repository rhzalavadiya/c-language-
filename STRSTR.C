#include<stdio.h>
#include<conio.h>
#define S 50
char *Strstr(char *input,char *search)
{
	char *p1,*p2,*start;
	for(start=input;start!='\0';start++)
	{
		p1=search;
		p2=start;
		while(p1!='\0')
		{
			if(*p1!=*p2)
				break;
				p1++;
				p2++;
		}
		if(*p1=='\0')
			return start;
	}
	return NULL;
}
void main()
{
	char input[S],search[S];
	clrscr();
	printf("Enter any String....");
	gets(input);
	printf("\nEnter String for search....");
	gets(search);
	if(Strstr(input,search)!=NULL)
		printf("\nString Found...");
	else
		printf("\nString Not Found...");
	getch();
}