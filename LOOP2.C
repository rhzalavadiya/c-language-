/* Lopping programing
09/08
rupali
*/
#include<stdio.h>
#include<conio.h>
void Loop(const int start,const int end)
{
	int i;
	for(i=start;i<=end;i++)
		printf("\n%d",i);
}
void main()
{
	int start,end;
	clrscr();
	printf("Enter Starting and Ending number....\n");
	scanf("%d %d",&start,&end);
	if(start>end)
		printf("\nEnter valid number for starting...");
	else
		Loop(start,end);
	getch();
}
/*
Enter Starting and Ending number....
2 6                                                                             
                                                                                
2                                                                               
3                                                                               
4                                                                               
5                                                                               
6                                                                               
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/