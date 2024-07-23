/* to check given number is armstrong or not....
12/08
Rupali
for(i=1;i<=1000;i++)
{
       if(Armstrong(i))
		printf("%d",i);
}
*/
#include<stdio.h>
#include<conio.h>
int Armstrong(int no)
{
	int temp,r,sum=0;
	temp=no;
	while(no!=0)
	{
		r=no%10;
		sum=sum+(r*r*r);
		no=no/10;
	}
	return temp==sum;
}
void main()
{
	int no;
	char ch;
	do
	{
		clrscr();
		printf("Enter Number....\n");
		scanf("%d",&no);
		if(Armstrong(no))
			printf("\nNumber is Armstrong..");
		else
			printf("\Number is Not Armstrong...");
		printf("\ndo You Want to continue...(Y/N)\n");
		ch=getch();
	}
	while(ch!='n' && ch!='N'&& ch!='y' && ch!='Y');
	getch();
}
/*
Enter Number....
153                                                                             
                                                                                
Number is Armstrong..                                                           
do You Want to continue...(Y/N)
*/