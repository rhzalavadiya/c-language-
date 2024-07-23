/*
print pattern
 1 2 3 4
 5 6 7
 8 9
10
*/
#include<stdio.h>
#include<conio.h>
void Print(int l)
{
	int r,c,k,a=1;
	for(r=l;r>=1;r--)
	{
		for(c=1;c<=r;c++)
		{
			printf("%5d",a);
			a++;
		}
		printf("\n");
	}
}
void main()
{
	clrscr();
	Print(4);
	getch();
}