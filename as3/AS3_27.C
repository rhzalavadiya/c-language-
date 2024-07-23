/* given number is circular Prime or not....
12/08
Rupali
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int CircularPrime(const int no)
{
	int temp=no,d=0,i,a,b;
	while(temp!=0)
	{
		d++;
		temp=temp/10;
	}
	temp=no;
	for(i=0;i<=d;i++)
	{
		if(!Prime(temp))
			return 0;
		a=temp%10;
		temp=temp/10+a*pow(10,d-1);
	}
	return 1;
}
int Prime(int no)
{
	int i;
	if(no<=1)
		return 0;
	if(no<=3)
		return 1;
	if(no%2==0 || no%3==0)
		return 0;
	for(i=5;i*i<=no;i+=6)
	{
		if(no%i==0 || no%(i+2)==0)
			return 0;
	}
	return 1;
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
		if(CircularPrime(no))
			printf("\nCircular Prime Number...");
		else
			printf("\nNot Circular Prime Number...");
		printf("\ndo You Want to continue...(Y/N)\n");
		ch=getch();
	}
	while(ch!='n' && ch!='N'&& ch!='y' && ch!='Y');
	getch();
}
/*
Enter Number...
73                                                                              
                                                                                
Circular Prime Number...                                                        
do You Want to continue...(Y/N)                                                 
*/