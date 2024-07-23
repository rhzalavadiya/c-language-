#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct Member
{
	int id;
	char name[20];
	char div[10];
}Member;
typedef struct Book
{
	int id;
	char name[20];
	char aut[10];
	int copy;
}Book;
typedef IssueDate
{
	int mid;
	int bid;
	struct Date
	{
		int day;
		int month;
		int year;
	}Date;
	struct Return
	{
		int day1;
		int month1;
		int year1;
	}Return;
}IssurDate;
typedef enum bool{false,true}Bool;
void Menu()
{
	printf("1.ADD");
	printf("\n2.Display");
	printf("\n3.Search");
	printf("\n4.Update");
	printf("\n5.Delete");
	printf("\n6.Exit");
	printf("\nEnter your choice...\n");
}
void MainMember()
{
	FILE *fp,*ft;
	int ch;
	Member m;
	int recsize=sizeof(m);
	char nm[20];
	Bool openf=false,searchf=false;
	do
	{
		clrscr();
		Menu();
		scanf("%d",&ch);
		if(openf==false)
		{
		fp=fopen("mem.dat","rb+");
		if(fp==NULL)
		{
			fp=fopen("mem.dat","wb+");
			if(fp==NULL)
			{
				printf("not open");
				getch();
				return;
			}
		}
		openf=true;
		}
		switch(ch)
		{
			case 1:
			if(openf==true)
			{
				fseek(fp,0,SEEK_END);
				printf("Enter member record");
				scanf("%d %s %s",&m.id,&m.name,&m.div);
				fwrite(&m,recsize,1,fp);
				printf("Record add sucessfully");
			}
			break;
			case 2:
				if(openf==true)
				{
					rewind(fp);
					while(fread(&m,recsize,1,fp))
					{
						printf("\n\t%d  \t%s \t%s",m.id,m.name,m.div);
					}
				}
			break;
			case 3:
				if(openf==true)
				{
					rewind(fp);
					printf("\nEnter name for search...");
					scanf("%s",nm);
					while(fread(&m,recsize,1,fp))
					{
						if(strcmp(nm,m.name)==0)
						{
						printf("\n\t%d \t%s \t%s",m.id,m.name,m.div);
						searchf=true;
						}
					}
					if(searchf==false)
						printf("\nNot found");
				}
			break;
			case 4:
				if(openf==true)
				{
					rewind(fp);
					printf("\nEnter name for update...");
					scanf("%s",nm);
					while(fread(&m,recsize,1,fp))
					{
						if(strcmp(nm,m.name)==0)
						{
							fseek(fp,-recsize,SEEK_CUR);
							printf("Enter member record");
							scanf("%d %s %s",&m.id,&m.name,&m.div);
							fwrite(&m,recsize,1,fp);
							searchf=true;
							printf("\nUpdated sucessfully");
						}
					}
					if(searchf==false)
						printf("\nNot found");
				}
			break;
			case 5:
				if(openf==true)
				{
					rewind(fp);
					printf("\nEnter name for Delet...");
					scanf("%s",nm);
					ft=fopen("tmp.dat","wb+");
					if(ft==NULL)
					{
					printf("not open");
					getch();
					return;
					}
					searchf=false;
					while(fread(&m,recsize,1,fp))
					{
						if(strcmp(nm,m.name)!=0)
						{

							fwrite(&m,recsize,1,ft);
						       //	searchf=false;
						}
						else
						{
							searchf=true;
						}
					}
					if(searchf==false)
						printf("\nNot found");
					else
					{
						fclose(fp);
						fclose(ft);
						remove("mem.dat");
						rename("tmp.dat","mem.dat");
						openf=false;
						printf("\nDeleted sucessfully");
					}
				}
			break;
			case 6:
			break;
			default :
			printf("Wrong");
		}if(ch!=6)
			getch();
	}
	while(ch!=6);
	getch();
}
void MainBook()
{
	FILE *fp,*ft;
	int ch;
	Book m;
	int recsize=sizeof(m);
	char nm[20];
	Bool openf=false,searchf=false;
	do
	{
		clrscr();
		Menu();
		scanf("%d",&ch);
		if(openf==false)
		{
		fp=fopen("book.dat","rb+");
		if(fp==NULL)
		{
			fp=fopen("book.dat","wb+");
			if(fp==NULL)
			{
				printf("not open");
				getch();
				return;
			}
		}
		openf=true;
		}
		switch(ch)
		{
			case 1:
			if(openf==true)
			{
				fseek(fp,0,SEEK_END);
				printf("Enter book record");
				scanf("%d %s %s %d",&m.id,&m.name,&m.aut,&m.copy);
				fwrite(&m,recsize,1,fp);
				printf("Record add sucessfully");
			}
			break;
			case 2:
				if(openf==true)
				{
					rewind(fp);
					while(fread(&m,recsize,1,fp))
					{
						printf("\n\t%d  \t%s \t%s \t%d",m.id,m.name,m.aut,m.copy);
					}
				}
			break;
			case 3:
				if(openf==true)
				{
					rewind(fp);
					printf("\nEnter name for search...");
					scanf("%s",nm);
					while(fread(&m,recsize,1,fp))
					{
						if(strcmp(nm,m.name)==0)
						{
						printf("\n\t%d  \t%s \t%s \t%d",m.id,m.name,m.aut,m.copy);
						searchf=true;
						}
					}
					if(searchf==false)
						printf("\nNot found");
				}
			break;
			case 4:
				if(openf==true)
				{
					rewind(fp);
					printf("\nEnter name for update...");
					scanf("%s",nm);
					while(fread(&m,recsize,1,fp))
					{
						if(strcmp(nm,m.name)==0)
						{
							fseek(fp,-recsize,SEEK_CUR);
							printf("Enter member record");
							scanf("%d %s %s %d",&m.id,&m.name,&m.aut,&m.copy);
							fwrite(&m,recsize,1,fp);
							searchf=true;
							printf("\nUpdated sucessfully");
						}
					}
					if(searchf==false)
						printf("\nNot found");
				}
			break;
			case 5:
				if(openf==true)
				{
					rewind(fp);
					printf("\nEnter name for Delet...");
					scanf("%s",nm);
					ft=fopen("tmp.dat","wb+");
					if(ft==NULL)
					{
					printf("not open");
					getch();
					return;
					}
					while(fread(&m,recsize,1,fp))
					{
						if(strcmp(nm,m.name)==0)
						{

							fwrite(&m,recsize,1,fp);
							searchf=false;
						}
						else
						{
							searchf=true;
						}
					}
					if(searchf==false)
						printf("\nNot found");
					else
					{
						fclose(fp);
						fclose(ft);
						remove("book.dat");
						rename("tmp.dat","book.dat");
						openf=false;
						printf("\nDeleted sucessfully");
					}
				}
			break;
			case 6:
			break;
			default :
			printf("Wrong");
		}if(ch!=6)
			getch();
	}
	while(ch!=6);
	getch();
}
void IssueMenu()
{
	printf("\n1.Add...");
	printf("\n2.Display..");
}
void MainMenu()
{
	printf("\n1.Member");
	printf("\n2.Book");
	printf("\n3.Issue Book");
	printf("\n4.Return Book");
	printf("\n5.Exit");
	printf("\nEnter your choice..\n");
}
void main()
{
	int ch;
	do
	{
		clrscr();
		MainMenu();
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
		MainMember();
		break;
		case 2:
		MainBook();
		break;
		case 3:
		break;
		case 4:
		break;
		case 5:
		break;
		default :
		printf("Wrong");
		}
		if(ch!=5)
			getch();
	}
	while(ch!=5);
	getch();
}