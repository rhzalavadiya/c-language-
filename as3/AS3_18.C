/* print decimal to binary
12/08
Rupali
*/
#include<stdio.h>
#include<conio.h>
void Binary(int no)
{
	int rem;
	if(no==0)
		return;
	else
	{
		rem=no%2;
		no=no/2;
		Binary(no);
		printf("%d",rem);
	}
}
void main()
{
	int no;
	char ch;
	do
	{
		clrscr();
		printf("\nEnter Number......");
		scanf("%d",&no);
		printf("\nBinary Number is.....");
		Binary(no);
		printf("\ndo You Want to continue...(Y/N)\n");
		ch=getch();
	}
	while(ch!='n' && ch!='N'&& ch!='y' && ch!='Y');
	getch();
}
/*

Enter Number......5                                                             
                                                                                
Binary Number is.....101                                                        
do You Want to continue...(Y/N)
*/