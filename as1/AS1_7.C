/* print convert celsius to  fahrenheit
rupali
5/8
*/
#include<stdio.h>
#include<conio.h>
float ConvertCtoF(const float f)
{
       float c;
       c=(5*(f-32))/9;
       return c;
}
void main()
{
	float f;
	clrscr();
	printf("Enter fahrenheit....\n");
	scanf("%f",&f);
	printf("\ncelsius is : %f",ConvertCtoF(f));
	getch();
}
/*
Enter fahrenheit....
-40                                                                             
                                                                                
celsius is : -40.000000                                                         
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/