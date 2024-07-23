#include<stdio.h>
#include<conio.h>
void Delete(char *s,char *w)
{
	int len=strlen(w);
	char *src=s,*dst=s;
	while(*src)
	{
		if(strncmp(src,w,len)==0)
			src+=len;
		else
		{
			*dst=*src;
			src++;
			dst++;
		}
	}
	*dst='\0';
}
void main()
{
	char s[50],w[50];
	clrscr();
	printf("Enter Any String....");
	gets(s);
	printf("\nEnter word to delet...");
	gets(w);
	Delete(s,w);
	printf("\nAfter Delete the word .....%s",s);
	getch();
}