/* enter any arithmetic operator and two value and display result
08/08
rupali
*/
#include<stdio.h>
#include<conio.h>
void Days(const int no)
{
	switch(no)
	{
		case 1:
			printf("\nSunday");
			break;
		case 2:
			printf("\nMonday");
			break;
		case 3:
			printf("\nTuesday");
			break;
		case 4:
			printf("\nWendsday");
			break;
		case 5:
			printf("\nThursday");
			break;
		case 6:
			printf("\nFriday");
			break;
		case 7:
			printf("\nSatursday");
			break;
		defualt:
			printf("Wrong Choice");
			exit(0);
			break;
	}
}
void main()
{
	int no;
	clrscr();
	printf("Enter Any Number.....");
	scanf("%d",&no);
	Days(no);
	getch();
}
/*
Enter Any Number.....2
                                                                                
Monday                                                                          
*/