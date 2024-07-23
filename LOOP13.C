#include<stdio.h>
#include<conio.h>
void Print(int l)
{
	int r,c,k;
	for(r=1;r<=l;r++)
	{
		for(c=r;c<=l;c++)
		{
			printf(" ");
		}
		for(k=1;k<=r;k++)
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