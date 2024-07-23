/*print pattren
Rupali
13/08
OUTPUT :
-----------------
    1    2    3    4
    5    6    7                                                                 
    8    9                                                                      
    10
                                                                                
Do You Want To Countinue..(Y/N)                                                 
*/
#include<stdio.h>
#include<conio.h>
void Print(int l)
{
	int r,c,k,a=1;
	for(r=l;r>=1;r--)
	{
		for(c=1;c<=r;c++)
		{
			printf("%5d",a);
			a++;
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
		Print(4);
		printf("\nDo You Want To Countinue..(Y/N)");
		ch=getch();
	}
	while(ch!='y'&&ch!='Y'&&ch!='n'&ch!='N');
	getch();
}