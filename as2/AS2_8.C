
/* find to student eligible for admission or not
08/08
rupali
*/
#include<stdio.h>
#include<conio.h>
void CheckElig(const int math,const int phys,const int chemi)
{
	int total,mp;
	total=math+phys+chemi;
	mp=math+phys;
	if((math>=50 && phys>=45 && chemi>=60 && total>=170)||(mp>=120))
		printf("\nStudent is Eligible for Admission");
	else
		printf("\nStudent is Not Eligible for Admission");
}
void main()
{
	int math,phys,chemi;
	clrscr();
	printf("Enter Mathemic Physics,Chemistry....\n");
	scanf("%d %d %d",&math,&phys,&chemi);
	CheckElig(math,phys,chemi);
	getch();
}
/*
Enter Mathemic Physics,Chemistry....
50 34 56                                                                        
                                                                                
Student is Not Eligible for Admission                                           

*/