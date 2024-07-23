/*swap two number....
 09/08
 rupali
*/
#include<stdio.h>
#include<conio.h>
void Swap(int no1,int no2)
{
	int temp;
	temp=no1;
	no1=no2;
	no2=temp;
	printf("No1 : %d No2 : %d",no1,no2);
}
void main()
{
	int no1,no2;
	clrscr();
	printf("Enter Two Number.....\n");
	scanf("%d %d",&no1,&no2);
	Swap(no1,no2);
	getch();
}
/*
Enter Two Number.....
3 4                                                                             
No1 : 4 No2 : 3                                                                 
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/