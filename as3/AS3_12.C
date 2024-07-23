/* to check given number is binary or not....
12/08
Rupali
*/
#include<stdio.h>
#include<conio.h>
int Binary(int no)
{
	int i;
	while(no>0)
	{
		i=no%10;
		if(i!=0 && i!=1)
		{
			return 0;
			break;
		}
		no=no/10;
		if(no==0)
			return 1;
	}
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
		if(Binary(no))
			printf("\nBinary Number..");
		else
			printf("\Not Binary Number...");
		printf("\ndo You Want to continue...(Y/N)\n");
		ch=getch();
	}
	while(ch!='n' && ch!='N'&& ch!='y' && ch!='Y');
	getch();
}
/*
Enter Number....
010                                                                             
                                                                                
Binary Number..                                                                 
do You Want to continue...(Y/N)
*/