#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *f,*f1;
	char ch;
	clrscr();
	f=fopen("emp.c","r");
	f1=fopen("emp1.c","w");
	if(f==NULL)
	{
		printf("File can not be open");
		getch();
		return ;
	}
	if(f1==NULL)
	{
		printf("File can not be open");
		getch();
		return ;
	}
	ch=fgetc(f);
	while(ch!=EOF)
	{
		fputc(ch,f1);
		ch=fgetc(f);
	}
	fclose(f);
	fclose(f1);
	printf("\nFile Copied....");
	getch();
}