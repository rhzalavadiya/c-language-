/* print convert fahrenheit to celsius
rupali
5/8
*/
#include<stdio.h>
#include<conio.h>
float ConvertFtoC(const float fahrenheit)
{
       float celsius;
       celsius=(fahrenheit-32)/1.8;
       return celsius;
}
void main()
{
	float fahrenheit;
	clrscr();
	printf("Enter fahrenheit....\n");
	scanf("%f",&fahrenheit);
	printf("\ncelsius is : %f",ConvertFtoC(fahrenheit));
	getch();
}
/*
Enter fahrenheit....
65.7                                                                            
                                                                                
celsius is : 18.722222





                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/