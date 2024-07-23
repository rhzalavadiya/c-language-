/*print pattren
Rupali
13/08
OUTPUT :
-----------------
    1    2    3    4
    1    2    3    4                                                            
    1    2    3    4                                                            
    1    2    3    4                                                            
                                                                                
Do You Want To Countinue..(Y/N)                                                 
*/
#include<stdio.h>
#include<conio.h>
void Print()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			printf("%5d",j);
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