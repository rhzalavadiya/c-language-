/*
print squence
07/08
rupali
*/
#include<stdio.h>
#include<conio.h>
int Maximum(const int no1,const int no2,const int no3)
{
	if(no1>no2)
	{
		if(no1>no3)
		{
			return no1;
		}
		else
		{
			return no3;

		}
	}
	else
	{
		if(no2>no3)
		{
			return no2;
		}
		else
		{
			return no3;
		}
	}
}
void Printsq(const int no1,const int no2,const int no3)
{
	int x;
	x=Maximum(no1,no2,no3);
	if(x==no1)
	{
		if(no2>no3)
		{
			printf("Squence.....%d %d %d",no3,no2,no1);
		}
		else
		{
			printf("Squence.....%d %d %d",no2,no3,no1);
		}
	}
	else
	{
		if(x==no2)
		{
			if(no1>no3)
			{
				printf("Squence.....%d %d %d",no3,no1,no2);
			}
			else
			{
				printf("Squence.....%d %d %d",no1,no3,no2);
			}
		}
		else
		{
			if(no1>no2)
			{
				printf("Squence.....%d %d %d",no2,no1,no3);
			}
			else
			{
				printf("Squence.....%d %d %d",no1,no2,no3);
			}
		}
	}
}
void main()
{
	int no1,no2,no3;
	clrscr();
	printf("Enter Three value.....\n");
	scanf("%d %d %d",&no1,&no2,&no3);
	Printsq(no1,no2,no3);
	getch();
}
/*
Enter Three value.....
0 3 2                                                                           
Squence.....0 2 3                                                               
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/