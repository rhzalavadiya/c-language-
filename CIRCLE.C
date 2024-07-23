/*calculate Area of circle
02/08
rupali
*/
#include<stdio.h>
#include<conio.h>
#define pi 3.14
float areacircle( float r)
{
    float area;
    area=pi*r*r;
    return area;
}
void main()
{
	float r;
	clrscr();
	printf("Enter radius....\n");
	scanf("%f",&r);
	printf("area of circle is...%f",areacircle(r));
	getch();
}