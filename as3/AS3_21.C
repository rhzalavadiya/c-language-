/* display table of conersion from fahrenhit to celsius start=0 and increment
20 up to 160....
12/08
Rupali
*/
#include<stdio.h>
#include<conio.h>
void FtoCtable()
{
	float f,c;
	for(f=0;f<=160;f+=20)
	{
		c=(f-32)/1.8;
		printf("F = %g , c = %g \n",f,c);
	}
}
void main()
{
	char ch;
	do
	{
		clrscr();
		FtoCtable();
		printf("\ndo You Want to continue...(Y/N)\n");
		ch=getch();
	}
	while(ch!='n' && ch!='N'&& ch!='y' && ch!='Y');
	getch();
}
/*
F = 0 , c = -17.7778
F = 20 , c = -6.66667
F = 40 , c = 4.44444
F = 60 , c = 15.5556
F = 80 , c = 26.6667
F = 100 , c = 37.7778
F = 120 , c = 48.8889
F = 140 , c = 60
F = 160 , c = 71.1111

do You Want to continue...(Y/N)
*/