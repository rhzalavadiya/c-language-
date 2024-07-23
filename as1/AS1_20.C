/*calculate surface area
07/08
rupali
*/
#include<stdio.h>
#include<conio.h>
#define pi 3.14
float SurfaceOfarea( const float radius)
{
    float area;
    area=pi*radius*radius*4;
    return area;
}
void main()
{
	float radius;
	clrscr();
	printf("Enter radius....\n");
	scanf("%f",&radius);
	printf("surface area is...%f",SurfaceOfarea(radius));
	getch();
}
/*
Enter radius....
6                                                                               
surface area is...452.160004                                                    
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/