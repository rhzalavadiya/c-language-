/* find equivalent grade
08/08
rupali
*/
#include<stdio.h>
#include<conio.h>
void Grade(const int marks)
{
	if(marks<=34)
		printf("\nFAIL...");
	else if(marks>=35 && marks<=59)
		printf("\nSecond Class...");
	else if(marks>=60 && marks<=79)
		printf("\nFirst Class...");
	else
		printf("\nDist...");
}
void main()
{
	int marks;
	clrscr();
	printf("Enter Marks....\n");
	scanf("%d",&marks);
	Grade(marks);
	getch();
}
/*
Enter Marks....
90                                                                              
                                                                                
Dist...                                                                         

*/