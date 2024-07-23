/*calculate circumference of circle
05/08
rupali
*/
#include<stdio.h>
#include<conio.h>
#define pi 3.14
float Circucircle( float radius)
{
    float circ;
    circ=2*pi*radius;
    return circ;
}
void main()
{
	float radius;
	clrscr();
	printf("Enter radius....\n");
	scanf("%f",&radius);
	printf("area of circle is...%f",Circucircle(radius));
	getch();
}
/*
Enter radius....
2.4                                                                             
area of circle is...15.072001                                                   
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/