#include<stdio.h>
#include<conio.h>
void Currency(int amount)
{
	int a[9]={500,200,100,50,20,10,5,2,1};
	int i=0,ans;
	while(amount>0)
	{
		ans=amount/a[i];
		amount=amount%a[i];
		if(ans==0)
		{
		  i++;
		  continue;
		}
		printf("\n%d = %d ",a[i],ans);
		i++;
	}
}
void main()
{
	int amount;
	clrscr();
	printf("\nEnter Amount....");
	scanf("%d",&amount);
	Currency(amount);
	getch();
}