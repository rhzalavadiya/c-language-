/* find leap year
07/08
rupali
*/
#include<stdio.h>
#include<conio.h>
int LeapYear(int year)
{
	if((year%100==0 && year%400==0)||(year%100!=0 && year%4==0))
	{
		return 1;
	}
	else
	{
	return 0;
	}
}
void main()
{
	int year,leap;
	clrscr();
	printf("Enter year.....\n");
	scanf("%d",&year);
	leap=LeapYear(year);
	if(leap==1)
	{
		printf("\nLeap Year");
	}
	else
	{
		printf("\nNot Leap Year");
	}
	getch();
}
/*
Enter year.....
1996                                                                            
                                                                                
Leap Year                                                                                                                                                   

*/