#include<stdio.h>
#include<conio.h>
int Search(char *s,char *w)
{
	int j,i,len=strlen(s),wlen=strlen(w);
	for(i=0;i<len-wlen;i++)
	{
		for(j=0;j<wlen;j++)
		{
			if(s[i+j]!=w[j])
				break;
		}
		if(j==wlen)
			return i;
	}
	return -1;
}
void main()
{
	char s[50],w[50];
	int pos;
	clrscr();
	printf("Enter Any String......");
	gets(s);
	printf("\nEnter Serching string....");
	gets(w);
	pos=Search(s,w);
	if(pos!=-1)
		printf("\nWord Found at Postion...%d",pos);
	else
		printf("\nNot Found...");
	getch();
}