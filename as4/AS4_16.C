/*print pattren
Rupali
13/08
OUTPUT :
-----------------
  9  8  7
  6  5  4
  3  2  1

Do You Want To Countinue..(Y/N)
*/
#include<stdio.h>
#include<conio.h>
void Print(int l)
{
	int r,c,a=9;
	for(r=1;r<=l;r++)
	{
		for(c=1;c<=l;c++)
		{
			printf("%d",a);
			a--;
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
		Print(3);
		printf("\nDo You Want To Countinue..(Y/N)");
		ch=getch();
	}
	while(ch!='y'&&ch!='Y'&&ch!='n'&ch!='N');
	getch();
}