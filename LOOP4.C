/* Lopping programing
09/08
rupali
*/
#include<stdio.h>
#include<conio.h>
void Menu()
{
	printf("\n1.Increment...");
	printf("\n2.Decement");
	printf("\nEnter choice..");
}
void Loop(const int start,const int end,const int ch,const int no)
{
	int i;
	if(start<end && ch==1)
	{
			for(i=start;i<=end;i=i+no)
				printf("\n%d",i);
	}
	else if(start>end && ch==2)
	{
		for(i=start;i>=end;i=i-no)
			printf("\n%d",i);
	}
	else
	{
			printf("\nwrog....");
	}
}
void main()
{
	int start,end,no,ch;
	clrscr();
	Menu();
	scanf("\n%d",ch);
	printf("Enter value for increment or decrement....");
	scanf("%d",&no);
	printf("Enter Starting and Ending number....\n");
	scanf("%d%d",&start,&end);
	Loop(start,end,ch,no);
	getch();
}