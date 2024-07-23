/* Lopping programing
09/08
rupali
*/
#include<stdio.h>
#include<conio.h>
void Table(const int no,const int end)
{
	int i,ans;
	for(i=1;i<=end;i++)
	{
		ans=no*i;
		printf("\n%d * %d = %d",no,i,ans);
	}
}
void main()
{
	int no,end;
	clrscr();
	printf("Enter Number for Table...\n");
	scanf("%d",&no);
	printf("Enter Number for ending...\n");
	scanf("%d",&end);
	Table(no,end);
	getch();
}