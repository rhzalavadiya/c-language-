/*
find given number is positive negative or zero
08/08
rupali
*/
#include<stdio.h>
#include<conio.h>
int Pos_Nev(const int num1)
{
	if(num1==0)
		return 0;
	else if(num1>0)
		return 1;
	else
		return -1;
}
void main()
{
	int num1,a;
	clrscr();
	printf("Enter Integer Value.....\n");
	scanf("%d",&num1);
	a=Pos_Nev(num1);
	if(a==0)
		printf("\nGiven Number is Zero..");
	else if(a==1)
		printf("\nGiven Number is Positive..");
	else
		printf("\nGiven Number is Negative..");
	getch();
}
/*
Enter Two Integer Value.....
0                                                                               
                                                                                
Given Number is Zero..

*/