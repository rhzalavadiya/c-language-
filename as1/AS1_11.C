/*calculate sum up
05/08
rupali
*/
#include<stdio.h>
#include<conio.h>
float Sumup(float no)
{
    return no*(no+1)/2;
}
void main()
{
	float no;
	clrscr();
	printf("Enter number....\n");
	scanf("%f",&no);
	printf("sum up is...%f",Sumup(no));
	getch();
}
/*
Enter number....
                                                                                
12                                                                              
sum up is...78.000000                                                           
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/