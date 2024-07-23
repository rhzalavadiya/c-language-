/*  Area of triangle
03/08
Rupali
*/
#include<stdio.h>
#include<conio.h>
float AreaOfTriangle(const float base,const float height)
{
	float area;
	area=(base*height)/2;
	return area;
}
void main()
{       float base,height;
	clrscr();
	printf("Enter base and height.....\n");
	scanf("%f %f",&base,&height);
	printf("\nArea of Triangle is...%f",AreaOfTriangle(base,height));
	getch();
}