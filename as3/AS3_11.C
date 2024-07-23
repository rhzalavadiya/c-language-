/* print prime number between 1 to 200....
12/08
Rupali
*/
#include<stdio.h>
#include<conio.h>
void Prime()
{
	int flag,i,j;
	for(i=2;i<=200;i++)
	{
		flag=1;
		for(j=2;j<=i/2 && flag==1;j++)
		{
			if(i%j==0)
				flag=0;
		}
		if(flag==1)
			printf("%5d",i);
	}
}
void main()
{
	char ch;
	do
	{
		clrscr();
		Prime();
		printf("\ndo You Want to continue...(Y/N)\n");
		ch=getch();
	}
	while(ch!='n' && ch!='N'&& ch!='y' && ch!='Y');
	getch();
}
/*
    2    3    5    7   11   13   17   19   23   29   31   37   41   43   47   53
59   61   67   71   73   79   83   89   97  101  103  107  109  113  127  131
 /* 137  139  149  151  157  163  167  173  179  181  191  193  197  199
do You Want to continue...(Y/N) */