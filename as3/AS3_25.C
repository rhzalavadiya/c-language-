/* find LCM in two positive integer number....
12/08
Rupali

int LCM(int x,int y)
{
	int m=x>y?x:y;
	int i,tmp;
	for(i=1;;i++)
	{
		tmp=max*1;
		if(tmp%x==0 && tmp%y==0)
			return tmp;
	}
}
*/
#include<stdio.h>
#include<conio.h>
int GCD(const int no1,const int no2)
{
	if(no2==0)
	{
		return no1;
	}
	return GCD(no2,no1%no2);
}
int LCM(const int no1,const int no2)
{
	return (no1,no2)/GCD(no1,no2);
}
void main()
{
	int no1,no2;
	char ch;
	do
	{
		clrscr();
		printf("Enter Two Positive Number...\n");
		scanf("%d %d",&no1,&no2);
		if(no1<=0 || no2<=0)
			printf("\nPlz Enter Positive Number...");
		else
			printf("\nLCM is....%d",LCM(no1,no2));
		printf("\ndo You Want to continue...(Y/N)\n");
		ch=getch();
	}
	while(ch!='n' && ch!='N'&& ch!='y' && ch!='Y');
	getch();
}

/*
Enter Two Positive Number...
10 34                                                                           
                                                                                
LCM is....17                                                                    
do You Want to continue...(Y/N)                                                 
*/