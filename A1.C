#include<stdio.h>
#include<conio.h>
void Printas()
{
	int i;
	for(i=0;i<256;i++)
	{
		printf("\t%d=%c",i,i);
		if(i==10)
		getch();
	}
}
void main()
{
	clrscr();
	Printas();
	getch();
}