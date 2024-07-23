/* find electicity bill
08/08
rupali
*/
#include<stdio.h>
#include<conio.h>
float Bill(const float unit)
{
	float bill;
	if(unit>=50)
		return(unit*2.30);
	else if(unit>=50 && unit<=150)
		return(unit*2.60);
	else if(unit>=150 && unit<=300)
		return(unit*3.25);
	else
		return(unit*4.35);
}
void main()
{
	float unit;
	clrscr();
	printf("Enter Electric Unit.....\n");
	scanf("%f",&unit);
	printf("\nBill Amount is....%f",Bill(unit));
	getch();
}
/*
Enter Electric Unit.....
400                                                                             
                                                                                
Bill Amount is....920.000000                                                    

*/