#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *f;
	char ch;
	int line=0,ch1=0,word=0,flag;
	clrscr();
	f=fopen("emp.txt","r");
	if(f==NULL)
	{
		printf("File can not be open");
		getch();
		return ;
	}
	ch=fgetc(f);
	while(ch!=EOF)
	{
		printf("%c",ch);
		ch1++;
		if(ch=='\n')
		{
			line++;
			flag=1;
		}
		if(ch==' ')
			word++;
	       ch=fgetc(f);
		if(line%25==0 && line!=0 &&flag==1)
		{
		  getch();
		  flag=0;
		 }
	}
	printf("\nLine is...%d",line);
	printf("\ncharcter is...%d",ch1);
	printf("\nWord is...%d",word);
	fclose(f);
	getch();
}
