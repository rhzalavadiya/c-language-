#include<stdio.h>
#include<conio.h>
int Loop(const int no)
{
	int i,sum=0,j=1;
	for(i=1;i<=no;i++)
	{
		sum+=j;
		j=j+2;
	}
	return sum;
}
void main()
{
	int no;
	clrscr();
	printf("Enter Number...\n");
	scanf("%d",&no);
	printf("Odd Number sum...%d",Loop(no));
	getch();
}