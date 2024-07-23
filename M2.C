/* calculate sum withous using plus operator
07/08
rupali
*/
#include<stdio.h>
#include<conio.h>
int Add(const int no1,const int no2)
{
	return no1-(-no2);
}
void main()
{
	int no1,no2;
	clrscr();
	printf("Enter two value....\n");
	scanf("%d %d",&no1,&no2);
	printf("Addition is....%d",Add(no1,no2));
	getch();

}