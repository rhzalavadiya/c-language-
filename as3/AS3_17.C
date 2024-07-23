/* to check given number is krishnamurthi or not....
12/08
Rupali
*/
#include<stdio.h>
#include<conio.h>
int Fact(int no)
{
	if(no==1)
		return 1;
	else
		return no*Fact(no-1);
}
int Krishnamurthi(int no)
{
	int i,temp,r,sum=0;
	temp=no;
	while(no!=0)
	{
		r=no%10;
		sum=sum+Fact(r);
		no=no/10;
	}
	return sum==temp;
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
		if(Krishnamurthi(no))
			printf("\nNumber is Krishnamurthi..");
		else
			printf("\Number is Not Krishnamurthi...");
		printf("\ndo You Want to continue...(Y/N)\n");
		ch=getch();
	}
	while(ch!='n' && ch!='N'&& ch!='y' && ch!='Y');
	getch();
}
/*
Enter Number....
145                                                                             
                                                                                
Number is Krishnamurthi..                                                       
do You Want to continue...(Y/N)
*/