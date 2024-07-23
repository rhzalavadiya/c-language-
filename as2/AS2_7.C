/* find gross salary
08/08
rupali
*/
#include<stdio.h>
#include<conio.h>
float GrossSalary(const float basicsl)
{
	float da,hra,pf,gs;
	if(basicsl<5000)
		da=(basicsl*30)/100;
	else
		da=(basicsl*45)/100;
	hra=(basicsl*15)/100;
	pf=(basicsl*12)/100;
	gs=basicsl+da+hra-pf;
	return gs;
}
void main()
{
	float basicsl;
	clrscr();
	printf("Enter Basic Salary.....\n");
	scanf("%f",&basicsl);
	printf("Gross Salary is....%f",GrossSalary(basicsl));
	getch();
}
/*
Enter Basic Salary.....
67000                                                                           
Gross Salary is....99160.000000                                                 






*/