#include<stdio.h>
#include<conio.h>
void Print(int l)
{
	int r,c,k=1;
	for(r=1;r<=l;r++)
	{
		for(c=1;c<=r;c++)
		{
				printf("%3d",k);
				k++;
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