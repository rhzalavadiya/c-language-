/*
find maximum number between three number
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
void main()
{
	int no1,no2,no3;
	clrscr();
	printf("Enter Three value.....\n");
	scanf("%d %d %d",&no1,&no2,&no3);
	printf("Maximum Number is.....%d",Maximum(no1,no2,no3));
	getch();
}
/*
Enter Three value.....
34 56 12                                                                        
Maximum Number is.....56                                                        
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/