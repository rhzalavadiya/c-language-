/* find net salary
08/08
rupali
*/
#include<stdio.h>
#include<conio.h>
float NetSl(const int lno,const float bsl)
{
	float gs,ns,it,hra,perks;
	switch(lno)
	{
		case 1:
			perks=1000+500;
		break;
		case 2:
			perks=750+200;
		break;
		case 3:
			perks=500+100;
		break;
		case 4:
			perks=250+0;
		break;
		default :
			perks=0;
			printf("\nWrong");
		break:
	}
	hra=(bsl*10)/100;
	gs=bsl+hra+perks;
	if(gs<=2000)
		it=0;
	else if(gs>=2000 && gs<=4000)
		it=(gs*3)/100;
	else if(gs>=4000 && gs<=5000)
		it=(gs*5)/100;
	else
		it=(gs*8)/100;
	ns=gs-it;
	return ns;
}
void main()
{
	float jno,bsl;
	int lno;
	clrscr();
	printf("Enter job No. Level No and Basic salary...\n");
	scanf("%f %d %f",&jno,&lno,&bsl);
	printf("Net Salary....%f",NetSl(lno,bsl));
	getch();
}
/*
Enter job No. Level No and Basic salary...
67 1 3000                                                                       
Net Salary....4560.000000                                                       
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                



                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/