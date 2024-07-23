/*
find maximum number between two number
08/08
rupali
*/
#include<stdio.h>
#include<conio.h>
int Maximum(const int num1,const int num2)
{
	if(num1>num2)
		return num1;
	else
		return num2;
}
void main()
{
	int num1,num2;
	clrscr();
	printf("Enter Two Integer Value.....\n");
	scanf("%d %d",&num1,&num2);
	printf("\nMaximum Number is.....%d",Maximum(num1,num2));
	getch();
}
/*
Enter Two Integer Value.....
35 2                                                                            
                                                                                
Maximum Number is.....35
*/