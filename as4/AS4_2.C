/*print pattren
Rupali
13/08
OUTPUT :
-----------------
    1    2    3
    4    5    6                                                                 
    7    8    9                                                                 
                                                                                
Do You Want To Countinue..(Y/N)                                                 
*/
#include<stdio.h>
#include<conio.h>
void Print()
{
	int i,j,k=1;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("%5d",k);
			k++;
		}
		printf("\n");
	}
}
void main()
{
	char ch;
	do
	{
		clrscr();
		Print();
		printf("\nDo You Want To Countinue..(Y/N)");
		ch=getch();
	}
	while(ch!='y'&&ch!='Y'&&ch!='n'&ch!='N');
	getch();
}