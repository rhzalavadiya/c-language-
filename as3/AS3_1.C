/*sum of n Even number
10/08
Rupali
*/
#include<stdio.h>
#include<conio.h>
int Loop(const int no)
{
	int i,sum=0,j=2;
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
	char ch;
	do
	{
	clrscr();
	printf("Enter Number...\n");
	scanf("%d",&no);
	printf("Odd Number sum...%d",Loop(no));
	printf("\ndo You Want to continue...(Y/N)\n");
	do
	{
		ch=getch();
	}
	while(ch!='n' && ch!='N'&& ch!='y' && ch!='Y');
	}
	while(ch!='n' && ch!='N');
	getch();
}