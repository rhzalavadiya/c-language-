#include<stdio.h>
#include<conio.h>
void Print(int l)
{
	int r,c;
	for(r=1;r<=l;r++)
	{
		for(c=1;c<=l;c++)
		{
			printf("*");
		}
		printf("\n");
	}
}
void main()
{
	int no;
	clrscr();
	printf("Enter Number...\n");
	scanf("%d\n",&no);
	Print(no);
	getch();
}