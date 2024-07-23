/*print pattren
Rupali
13/08
OUTPUT :
-----------------
$ $ $ $ $
$ $ $ $
$ $ $
$ $
$

Do You Want To Countinue..(Y/N)
*/
#include<stdio.h>
#include<conio.h>
void Print(int l)
{
	int r,c,k;
	for(r=l;r>=1;r--)
	{
		for(c=1;c<=r;c++)
		{
			printf("$ ");
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
		Print(5);
		printf("\nDo You Want To Countinue..(Y/N)");
		ch=getch();
	}
	while(ch!='y'&&ch!='Y'&&ch!='n'&ch!='N');
	getch();
}