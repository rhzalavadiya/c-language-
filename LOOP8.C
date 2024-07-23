/*sum of digit
09/08
rupali
*/
#include<stdio.h>
#include<conio.h>
int Sum(const int no)
{
	int sum=0,temp=no,r;
	while(temp>0)
	{
		r=temp%10;
		sum=sum+r;
		temp=temp/10;
	}
	return sum;
}
void main()
{
	int no;
	clrscr();
	printf("Enter Number...\n");
	scanf("%d",&no);
	printf("sum of digit is...%d",Sum(no));
	getch();
}