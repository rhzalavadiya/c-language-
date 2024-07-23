#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Emp
{
	int eid;
	char enm[20];
	float sal;
}Emp;
void Menu()
{
	printf("\n1. Read Data...");
	printf("\n2. Display Data...");
	printf("\n3. Search...");
	printf("\n4. Sort...");
	printf("\n5. Exit...");
	printf("\n. Enter Your choice...");
}
void Searchmenu()
{
	printf("\n1. Search By Emp I'd...");
	printf("\n2. Search By Name...");
	printf("\n3. Exit...");
	printf("\n. Enter Your choice...");
}
void Sortmenu()
{
	printf("\n1. Sort By Emp Salary...");
	printf("\n2. Sort By Name...");
	printf("\n3. Exit...");
	printf("\n. Enter Your choice...");
}
/*void ReadData(Emp *e,int n)
{

} */
void main()
{
	int ch,srch,stch;
	do
	{
		clrscr();
		Menu();
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			break;
			case 2:
			break;
			case 3:
				do
				{
					clrscr();
					Searchmenu();
					scanf("%d",&srch);
					switch(srch)
					{
						case 1:
						break;
						case 2:
						break;
						case 3:
						break;
						default :
							printf("\nWrong..");
					}
					if(srch!=3)
					getch();
				}
				while(srch!=3);
			break;
			case 4:
				do
				{
					clrscr();
					Sortmenu();
					scanf("%d",&stch);
					switch(stch)
					{
						case 1:
						break;
						case 2:
						break;
						case 3:
						break;
						default :
							printf("\nWron..");
					}
					if(stch!=3)
					getch();
				}
				while(stch!=3);
			break;
			case 5:
			break;
			default :
				printf("\nWrong...");
		}
		if(ch!=5)
		getch();
	}
	while(ch!=ch);
	getch();
}
