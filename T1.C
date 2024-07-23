/*ass2 program 11
19/08
rupali
*/
#include<stdio.h>
#include<conio.h>
float Bill(const float unit)
{
	float bill=0,ans=0;
	if(unit>=300)
	{
		ans=unit-50;
		bill+=(50*2.30);
		ans=ans-50;
		bill+=(50*2.60);
		ans=ans-150;
		bill+=(150*3.25);
		bill+=(ans*4.35);
	       //	printf("\n%g  %g",bill,ans);
	}
	else
	{
		if(unit<=50)
			return(unit*2.30);
		else if(unit>=50 && unit<=150)
			return(unit*2.60);
		else
			return(unit*3.25);
	}
	return bill;

}
void main()
{
	float unit;
	clrscr();
	printf("Enter Unit....");
	scanf("%f",&unit);
	printf("\nBill Amount is...%g",Bill(unit));
	getch();
}
/*
Enter Unit....56
                                                                                
Bill Amount is...128.8
*/