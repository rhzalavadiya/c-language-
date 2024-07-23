#include<stdio.h>
#include<conio.h>
#define R 50
#define C 50
void Strsort(char str[R][C],int size)
{
	int i,j;
	char *tmp;
	for(i=0;i<size-i;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(strcmp(str[j],str[j+1])>0)
			{
				strcpy(tmp,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],tmp);
			}
		}
	}
}
void main()
{
	int size,i;
	char str[R][C];
	clrscr();
	printf("\nEnter Any Size.....");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		fflush(stdin);
		gets(str[i]);
	}
	Strsort(str,size);
	for(i=0;i<size;i++)
		puts(str[i]);

	getch();
}