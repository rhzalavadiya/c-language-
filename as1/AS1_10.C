/*find simple interst
rupali
5/8
*/
#include<stdio.h>
#include<conio.h>
float SimpleInterst(const float price,const float rate,const float year)
{
	float si;
	si=(price*rate*year)/100;
	return si;
}
void main()
{       float price,rate,year;
	clrscr();
	printf("Enter price rate and number of year....\n");
	scanf("%f %f %f",&price,&rate,&year);
	printf("Simple interest is....%f",SimpleInterst(price,rate,year));
	getch();
}
/*
Enter price rate and number of year....
100 2 4'                                                                        
Simple interest is....800.000000                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/