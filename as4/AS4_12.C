/*print pattren
Rupali
13/08
OUTPUT :
------------------
1
1 2                                                                             
1 2 3                                                                           
1 2 3 4                                                                         
                                                                                
Do You Want To Countinue..(Y/N)                                                 
*/
#include<stdio.h>
#include<conio.h>
void Print()
{
	int r,c,k;
	for(r=1;r<=4;r++)
	{
		for(k=1;k<=r;k++)
		{
			printf("%d ",k);
		}
		for(c=r;c<=4;c++)
		{
			printf(" ");
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