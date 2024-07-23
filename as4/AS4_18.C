/*print pattren
Rupali
13/08
OUTPUT :
-----------------
1      1
12    21                                                                        
123  321                                                                        
12344321                                                                        
                                                                                
Do You Want To Countinue..(Y/N)
*/
#include<stdio.h>
#include<conio.h>
void Print(int l)
{
	int r,c,k;
	for(r=1;r<=l;r++)
	{
		for(c=1;c<=l;c++)
		{
			if(c<=r)
				printf("%d",c);
			else
				printf(" ");
		}
		for(c=l;c>=1;c--)
		{
			if(c<=r)
				printf("%d",c);
			else
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
		Print(4);
		printf("\nDo You Want To Countinue..(Y/N)");
		ch=getch();
	}
	while(ch!='y'&&ch!='Y'&&ch!='n'&ch!='N');
	getch();
}