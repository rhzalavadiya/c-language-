/* to check given number is octal or not....
12/08
Rupali
*/
#include<stdio.h>
#include<conio.h>
int Octal(int no)
{
	int temp=no,o;
	while(temp>0)
	{
		o=temp%10;
		if(o<0||o>7)
			return 0;
		temp=temp/10;
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
		printf("Enter Number....\n");
		scanf("%d",&no);
		if(Octal(no))
			printf("\nOctal Number..");
		else
			printf("\Not Octal Number...");
		printf("\ndo You Want to continue...(Y/N)\n");
		ch=getch();
	}
	while(ch!='n' && ch!='N'&& ch!='y' && ch!='Y');
	getch();
}
/*
Enter Number....
0347                                                                            
                                                                                
Octal Number..                                                                  
do You Want to continue...(Y/N)
*/