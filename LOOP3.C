/* Lopping programing
09/08
rupali
*/
#include<stdio.h>
#include<conio.h>
void Loop(const int start,const int end)
{
	int i;
	if(start>end)
	{
		for(i=start;i<=end;i++)
			printf("\n%d",i);
	}
	else
	{
		for(i=end;i<=start;i++)
			printf("\n%d",i);
	}
}
void main()
{
	int start,end;
	clrscr();
	printf("Enter Starting and Ending number....\n");
	scanf("%d%d",&start,&end);
	Loop(start,end);
	getch();
}
/*
Enter Starting and Ending number....
5 2
                                                                                
2                                                                               
3                                                                               
4                                                                               
5                                                                               
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/