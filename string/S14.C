#include<stdio.h>
#include<conio.h>
void Append(char *s,char *a,int pos)
{
	int len=strlen(s),len2=strlen(a),i;
	for(i=len;i>=pos;i--)
	{
		s[i+len2]=s[i];
	}
	for(i=0;i<len2;i++)
		s[pos+i]=a[i];
}
void main()
{
	char s[50];
	char a[50];
	int pos;
	clrscr();
	printf("Enter any string....");
	gets(s);
	printf("\nEnter Append String....");
	gets(a);
	printf("\nEnter Postion.....");
	scanf("%d",&pos);
	Append(s,a,pos);
	printf("\nNew String is....%s",s);
	getch();
}