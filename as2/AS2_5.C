/* enter any arithmetic operator and two value and display result
08/08
rupali
*/
#include<stdio.h>
#include<conio.h>
int Arith(const char ar,const int num1,const num2)
{
	if(ar=='+')
		return (num1+num2);
	else if(ar=='-')
		return num1-num2;
	else if(ar=='*')
		return num1*num2;
	else
		return num1/num2;
}
void main()
{
	char ar;
	int num1,num2;
	clrscr();
	printf("Enter Any Arithmetic Opertors(+,-,*,/)....\n");
	scanf("%c",&ar);
	printf("Enter Two Integer Number....\n");
	scanf("%d %d",&num1,&num2);
	printf("\nAnswer is.....%d",Arith(ar,num1,num2));
	getch();
}
/*
Enter Any Arithmetic Opertors(+,-,*,/)....
*                                                                               
Enter Two Integer Number....                                                    
4 90                                                                            
                                                                                
Answer is.....360                                                               
  */