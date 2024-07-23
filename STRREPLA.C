#include<stdio.h>
#include<conio.h>
#define S 50
void Replace(char *str,char *old,char *news)
{
	char *pos,temp[S];
	int index,diff;
	int oldlen,newlen;
	oldlen=strlen(old) ;
	newlen=strlen(news);
	while((pos=strstr(str,old))!=NULL)
	{
		index=pos-str;
		strcpy(temp,str,index);
		temp[index]='\0';
		strcat(temp,news);
		diff=oldlen-newlen;
		strcat(temp,pos+oldlen);
		strcpy(str,temp);
		str=newlen+index;
	}
}
void main()
{
	char str[S],old[S],news[S];
	clrscr();
	printf("\nEnter any string....");
	gets(str);
	printf("\nEnter old string....");
	gets(old);
	printf("\nEnter Replacement String...");
	gets(news);
	Replace(str,old,news);
	printf("\nAfter Replace the String....%s",str);
	getch();
}
