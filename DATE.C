#include<stdio.h>
#include<conio.h>
typedef struct Date
{
	int day;
	int month;
	int year;
}Date;
int Leap(int year)
{
	if((year%400==0 && year%100==0) || (year%4==0 && year %100!=0))
		return 1;
	else
		return 0;
}
int ValidDate(Date d)
{
	int m[]={0,31,28,31,30,31,30,31,31,30,31,30,31};

	if(d.year<0||d.month<1||d.month>12||d.day<1)
		return 0;
	if(Leap(d.year))
		m[2]=29;
	if(d.day>m[d.month])
		return 0;
	return 1;
}
void Getdate(Date *d)
{
	printf("Enter Date Month And Year....");
	scanf("%d %d %d",&d->day,&d->month,&d->year);
}
void Menu()
{
	printf("\n1.DD-MM-YYYY");
	printf("\n2.YYYY-MM-DD");
	printf("\n3.MM-DD-YY");
	printf("\n4.MM-DD-YYYY");
	printf("\n5.DD-MM-YY");
	printf("\n6.DD-Jan-YYYY");
	printf("\n7.DD-Jan-YY");
	printf("\nEnter Your Choice....");
}
void PrintDate(Date d)
{
	int ch;
		Menu();
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("%d - %d - %d",d.day,d.month,d.year);
			break;
			case 2:
				printf("%d - %d - %d",d.year,d.month,d.day);
			break;
			case 3:
				printf("%d - %d - %d",d.month,d.day,d.year%100);
			break;
			case 4:
				printf("%d - %d - %d",d.month,d.day,d.year);
			break;
			case 5:
				printf("%d - %d - %d",d.day,d.month,d.year%100);
			break;
			case 6:
			printf("%d - %s - %d",d.day,(d.month==1)?"Jan":(d.month==2)?"Feb":(d.month==3)?"Mar":(d.month==4)?"Apr":(d.month==5)?"May":(d.month==6)?"June":(d.month==7)?"July":(d.month==8)?"Aug":(d.month==9)?"Sep":(d.month==10)?"Oct":(d.month==11)?"Nov":(d.month==12)?"Dec":"",d.year);
			break;
			case 7:
				printf("%d - %s - %d",d.day,(d.month==1)?"Jan":(d.month==2)?"Feb":(d.month==3)?"Mar":(d.month==4)?"Apr":(d.month==5)?"May":(d.month==6)?"June":(d.month==7)?"July":(d.month==8)?"Aug":(d.month==9)?"Sep":(d.month==10)?"Oct":(d.month==11)?"Nov":(d.month==12)?"Dec":"",d.year%100);
			break;
			case 8:
			break;
			default :
				printf("\nWrong");
		}
}
void main()
{
	Date d;

	Date *ptr = &d;
	clrscr();
	Getdate(ptr);
	if(ValidDate(d))
	{
		printf("\nValid date....\n");
		PrintDate(d);
	}
	else
		printf("\nInvalid Date.....");
	getch();
}