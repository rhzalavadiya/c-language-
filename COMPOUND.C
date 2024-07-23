#include<stdio.h>
#include<conio.h>
float CompoundInterst(const float price,const float rate,const float year)
{
	float ci;
	ci=price*(pow(1+rate/100),year);
	return ci;
}
void main()
{       float price,rate,year;
	clrscr();
	printf("Enter price rate and number of year....\n");
	scanf("%f %f %f",&price,&rate,&year);
	printf("Compound interest is....%f",CompoundInterst(price,rate,year));
	getch();
}