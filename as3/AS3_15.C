/* to check given number is palindrom or not....
12/08
Rupali
*/
#include<stdio.h>
#include<conio.h>
int Palindrom(int no)
{
	int temp,r,sum=0;
	temp=no;
	while(no!=0)
	{
		r=no%10;
		sum=sum*10+r;
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
		if(Palindrom(no))
			printf("\nNumber is Palindrom..");
		else
			printf("\Number is Not Palindrom...");
		printf("\ndo You Want to continue...(Y/N)\n");
		ch=getch();
	}
	while(ch!='n' && ch!='N'&& ch!='y' && ch!='Y');
	getch();
}
/*
Enter Number....
121                                                                             
                                                                                
Number is Palindrom..                                                           
do You Want to continue...(Y/N)
*/