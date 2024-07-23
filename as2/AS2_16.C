/* find Trangle type....
 09/08
 rupali
*/
#include<stdio.h>
#include<conio.h>
void Triangle(const float no1,const float no2,const float no3)
{
	if(no1==no2 && no2==no3)
		printf("\nEquilateral Triangle....");
	else if(no1!=no2 && no2!=no3 && no3!=no1)
		printf("\nScalen Triangle");
	else
		printf("\nIsosceles Triangle");
}
void main()
{
	float no1,no2,no3;
	clrscr();
	printf("Enter Three Side....\n");
	scanf("%f %f %f",&no1,&no2,&no3);
	Triangle(no1,no2,no3);
	getch();
}
/*
Enter Three Side....
2 3 2
                                                                                
Isosceles Triangle                                                              
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/