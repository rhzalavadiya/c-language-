/*print pattren
Rupali
13/08
OUTPUT :
-----------------
654
 23
  1

Do You Want To Countinue..(Y/N)
*/
#include<stdio.h>
#include<conio.h>
void Print(int n)
{
	int i,j,a=6;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		if(i%2==0)
		{
			for(j=0;j<n-i;j++)
			{
				printf("%d",a);
				a--;
			}
		}
		else
		{
		a-=n-i-1;
		for(j=0;j<n-i;j++)
		{
			printf("%d",a);
			a++;
		}
		a-=n+i-1;
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