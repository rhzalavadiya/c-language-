#include<stdio.h>
#include<conio.h>
int Fact(const int no)
{
	int i,fact=1;
	for(i=1;i<=no;i++)
	{
		fact*=i;
	}
	return fact;
}
void main()
{
	int no;
	clrscr();
	printf("Enter Number...\n");
	scanf("%d",&no);
	printf("factorial number is...%d",Fact(no));
	getch();
}