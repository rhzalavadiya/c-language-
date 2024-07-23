#include<stdio.h>
#include<conio.h>
void Print(int l)
{
	int r,c;
	for(r=1;r<=l;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("*");
		}
		printf("\n");
	}
}
void main()
{
	clrscr();
	Print(5);
	getch();
}