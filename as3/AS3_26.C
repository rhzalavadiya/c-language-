 /* given number is perfect or not....
12/08
Rupali
*/
#include<stdio.h>
#include<conio.h>
int Perfect(const int no)
{
	int sum=0,i;
	for(i=1;i<=no/2;i++)
	{
		if(no%i==0)
			sum=sum+i;
	}
	return sum==no;
}
void main()
{
	int no;
	char ch;
	do
	{
		clrscr();
		printf("Enter Two Positive Number...\n");
		scanf("%d",&no);
		if(Perfect(no))
			printf("\nPrefect Number...");
		else
			printf("\nNot Perfect Number...");
		printf("\ndo You Want to continue...(Y/N)\n");
		ch=getch();
	}
	while(ch!='n' && ch!='N'&& ch!='y' && ch!='Y');
	getch();
}
/*
Enter Two Positive Number...
6                                                                               
                                                                                
Prefect Number...                                                               
do You Want to continue...(Y/N)                                                 
*/