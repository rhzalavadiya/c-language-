/*calculate Area of circle
05/08
rupali
*/
#include<stdio.h>
#include<conio.h>
#define pi 3.14
float areacircle( float radius)
{
    float area;
    area=pi*radius*radius;
    return area;
}
void main()
{
	float r;
	clrscr();
	printf("Enter radius....\n");
	scanf("%f",&radius);
	printf("area of circle is...%f",areacircle(radius));
	getch();
}
/*
Enter radius....
2.3                                                                             
area of circle is...16.610600                                                   
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/