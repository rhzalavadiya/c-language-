/*print pattren
Rupali
13/08
OUTPUT :
-----------------
1
AB                                                                              
123                                                                             
ABCD                                                                            
12345                                                                           
                                                                                
Do You Want To Countinue..(Y/N)                                                 
*/
#include<stdio.h>
#include<conio.h>
void Print(int l)
{
	int r,c,k;
	char ch;
	for(r=1;r<=l;r++)
	{
		ch='A';
		for(k=1;k<=r;k++)
		{
			if(r%2==0)
			{
				printf("%c",ch);
				ch++;
			}
			else
			{
				printf("%d",k);
			}
		}
		for(c=r;c<=l;c++)
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
		Print(5);
		printf("\nDo You Want To Countinue..(Y/N)");
		ch=getch();
	}
	while(ch!='y'&&ch!='Y'&&ch!='n'&ch!='N');
	getch();
}