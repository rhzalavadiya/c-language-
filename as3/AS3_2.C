/*factorial number
10/08
Rupali
*/
#include<stdio.h>
#include<conio.h>
int Fact(const int no)
{
	int i,fact=1;
	for(i=1;i<=no;i++)
	{
		fact=fact*i;
	}
	return fact;
}
void main()
{
	int no;
	char ch;
	do
	{
	clrscr();
	printf("Enter Number...\n");
	scanf("%d",&no);
	printf("factorial is...%d",Fact(no));
	printf("\ndo You Want to continue...(Y/N)\n");
	do
	{
		ch=getch();
	}
	while(ch!='n' && ch!='N'&& ch!='y' && ch!='Y');
	}
	while(ch!='n' && ch!='N');
	getch();
}
/*
Enter Number...
5                                                                               
factorial is...120                                                              
do You Want to continue...(Y/N)                                                 
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/