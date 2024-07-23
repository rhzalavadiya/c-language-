/*find total amount
05/08
rupali
*/
#include<stdio.h>
#include<conio.h>
float AmountOfemp( float rate,float hour)
{
    return rate*hour;
}
void main()
{
	float rate,hour;
	clrscr();
	printf("Enter rate and Hour....\n");
	scanf("%f %f",&rate,&hour);
	printf("total Amount is...%f",AmountOfemp(rate,hour));
	getch();
}
/*
Enter rate and Hour....
100 32                                                                          
total Amount is...3200.000000                                                   
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/