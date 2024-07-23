/*find grade....
 09/08
 rupali
*/
#include<stdio.h>
#include<conio.h>
void Grade(const int m1,const int m2,const int m3)
{
	int total;
	total=m1+m2+m3;
	if(total>=80)
		printf("A+");
	else if(total>=70 && total<80)
		printf("A");
	else if(total>=60 && total<70)
		printf("A-");
	else if(total>=50 && total<60)
		printf("B+");
	else
		printf("Fail...");
	switch(total/10)
	{
		case 10:
		case 9:
		case 8:
			printf("\nSwitch : A+");
		break;
		case 7:                                                                                                                                                                           
			printf("\nSwitch : A");
		break;
		case 6:
			printf("\nSwitch : A-");
		break;
		case 5:
			printf("\nSwitch : B+");
		break;
		default:
			printf("\nSwitch : Fail");
			exit(0);
		break;
2	}
}
void main()
{
	int m1,m2,m3;
	clrscr();
	printf("Enter Three Subject marks.......\n");
	scanf("%d %d %d",&m1,&m2,&m3);
	Grade(m1,m2,m3);
	getch();
}
/*
Enter Three Subject marks.......
34 20 11                                                                        
A-                                                                              
Switch : A-                                                                     
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/