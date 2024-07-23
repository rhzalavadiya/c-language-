/*calculate angle of radius
07/08
rupali
*/
#include<stdio.h>
#include<conio.h>
#define pi 3.14
float AngleOfradius(const float angle)
{
    float radius;
    radius=(angle*pi)/180;
    return radius;
}
void main()
{
	float angle;
	clrscr();
	printf("Enter angle....\n");
	scanf("%f",&angle);
	printf("angle of radius is...%f",AngleOfradius(angle));
	getch();
}
/*
Enter angle....
60                                                                              
angle of radius is...1.046667                                                   
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/