#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
typedef enum Bool{flase,true};
typedef struct Student
{
	int rno;
	char name[20];
	int mark;
}Student;
void Menu()
{
	printf("\n1) Read Data..");
	printf("\n2) Display Data..");
	printf("\n3) Search..");
	printf("\n4) Sort Data..");
	printf("\n5) Exit..");
	printf("\n Enter The Choice..");
}
void Searchmenu()
{
	printf("\n1) Search by  Roll Number..");
	printf("\n2) Search By Name..");
	printf("\n3) Exit");
	printf("\n Enter The Choice..");
}
void Sortmenu()
{
	printf("\n1) Sort by  Roll Number..");
	printf("\n2) Sort By Name..");
	printf("\n3) Exit");
	printf("\n Enter The Choice..");
}
void Readdata(Student *s,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nEnter RollNo. , Name , Marks..");
		scanf("%d%s%d",&s[i].rno,&s[i].name,&s[i].mark);
	}
}
void Displaydata(Student *s,int n)
{
	int i;
	printf("\n RollNo.\tName\tMarks..");
	for(i=0;i<n;i++)
	{

		printf("\n\t%d\t%s\t%d",s[i].rno,s[i].name,s[i].mark);
	}
}
int SearchbyRno(Student *s,int n,int rno)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		if(s[i].rno==rno)
		{
			printf("\n%d\t%s\t%d",s[i].rno,s[i].name,s[i].mark);
			return 1;
		}
	}
	return 0;
}
int Searchbyname(Student *s,int n,char *nm)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		if(strcmp(s[i].name,nm)==0)
		{
			printf("\n%d\t%s\t%d",s[i].rno,s[i].name,s[i].mark);
			return 1;
		}
	}
	return 0;
}
void SortbyRno(Student *s,int n)
{
	int i,j;
	Student tmp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(s[j].rno>s[j+1].rno)
			{
				tmp=s[j];
				s[j]=s[j+1];
				s[j+1]=tmp;
			}
		}
	}
}
void Sortbynm(Student *s,int n)
{
	int i,j;
	Student tmp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(strcmp(s[j].name,s[j+1].name)>0)
			{
				tmp=s[j];
				s[j]=s[j+1];
				s[j+1]=tmp;
			}
		}
	}
}
void main()
{
	int ch,srch,stch;
	Student *s;
	int n,rno;
	char nm[20];
	do
	{
		clrscr();
		Menu();
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("\nHow many record you want to add...");
			scanf("%d",&n);
			s=(Student *)malloc(n*sizeof(Student));
			Readdata(s,n);
			break;
			case 2:
			Displaydata(s,n);
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
					printf("Enter Roll Number...");
					scanf("%d",&rno);
				       if(SearchbyRno(s,n,rno)==1)
						printf("\nFound....");
				       else
					printf("\nNot found");
					break;
					case 2:
					printf("Enter name...");
					scanf("%s",&nm);
				       if(Searchbyname(s,n,nm)==1)
						printf("\nFound....");
				       else
						printf("\nNot found");
					break;
					case 3:
					break;
					default :
					printf("\nWrong..");

				}
					if(srch!=3)
					getch();
			}while(srch!=3);
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
					SortbyRno(s,n);
					Displaydata(s,n);
					break;
					case 2:
					Sortbynm(s,n);
					Displaydata(s,n);
					break;
					case 3:
					break;
					default :
					printf("\nWrong..");

				}
					if(stch!=3)
					getch();
			}while(stch!=3);
			break;
			case 5:
			break;
			default :
				printf("\nWrong....");
		}
			if(ch!=5)
			getch();
	} while(ch!=5);
	getch();
}