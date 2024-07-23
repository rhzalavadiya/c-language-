/* print area of rectangle
rupali
5/8
*/
#include<stdio.h>
#include<conio.h>
float AreaOfrec(const float length,const float base)
{
       float area;
       area=length*base;
       return area;
}
void main()
{
	float length,base;
	clrscr();
	printf("Enter two value....\n");
	scanf("%f %f",&length,&base);
	printf("\nArea of Rectangle is : %f",AreaOfrec(length,base));
	getch();
}
/*
Enter two value....
12 3                                                                            
                                                                                
Area of Rectangle is : 36.000000                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/