/* Lopping progra
09/08
rupali
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	i=1;
	A:
	if(i<=5)
	{
		printf("\nHELLO");
		i++;
		goto A;
	}
	getch();
}