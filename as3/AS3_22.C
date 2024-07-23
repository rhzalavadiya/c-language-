/* print sum of number between 100 to 200 which divisable by 7....
12/08
Rupali
*/
#include<stdio.h>
#include<conio.h>
void Print()
{
	int sum=0,n;
	for(n=101;n<200;n++)
	{
		if(n%7==0)
		{
			sum=sum+n;
			printf("Number : %d , Sum : %d\n",n,sum);
		}
	}
}
void main()
{
	char ch;
	do
	{
		clrscr();
		Print();
		printf("\ndo You Want to continue...(Y/N)\n");
		ch=getch();
	}
	while(ch!='n' && ch!='N'&& ch!='y' && ch!='Y');
	getch();
}
/*
Number : 105 , Sum : 105
Number : 112 , Sum : 217
Number : 119 , Sum : 336
Number : 126 , Sum : 462
Number : 133 , Sum : 595
Number : 140 , Sum : 735
Number : 147 , Sum : 882
Number : 154 , Sum : 1036
Number : 161 , Sum : 1197
Number : 168 , Sum : 1365
Number : 175 , Sum : 1540
Number : 182 , Sum : 1722
Number : 189 , Sum : 1911
Number : 196 , Sum : 2107

do You Want to continue...(Y/N)
*/