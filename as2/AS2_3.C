
/*
find minimum number between two number
08/08
rupali
*/
#include<stdio.h>
#include<conio.h>
int Minimum(const int num1,const int num2)
{
	if(num1<num2)
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
	printf("\nMinimum Number is.....%d",Minimum(num1,num2));
	getch();
}
/*
Enter Two Integer Value.....
2 4                                                                             
                                                                                
Maximum Number is.....2                                                         

*/