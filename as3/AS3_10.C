/* enter number to print revese of given number....
12/08
Rupali
*/
#include<stdio.h>
#include<conio.h>
int Reverse(int no)
{
	int rev=0,rem;
	while(no!=0)
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	return rev;
}
void main()
{
	int no;
	char ch;
	do
	{
		clrscr();
		printf("\nEnter any Number ......");
		scanf("%d",&no);
		printf("Reverse number is...%d",Reverse(no));
		printf("\ndo You Want to continue...(Y/N)\n");
		ch=getch();
	}
	while(ch!='n' && ch!='N'&& ch!='y' && ch!='Y');
	getch();
}
/*
Enter any Number ......123                                                      
Reverse number is...321                                                         
do You Want to continue...(Y/N)
*/