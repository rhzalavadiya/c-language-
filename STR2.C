#include<stdio.h>
#include<conio.h>
#define S 50
int Strcomp(char *s,char *a)
{
	for(;*s==*a;s++,a++)
	if(*s=='\0')
	return 0;
	return *s-*a;
}
void StrRev(char *s)
{
	int l;
	char *q,*p,*t,tmp;
	l=strlen(s);
	p=s;
	t=s+l-1;
	while(p<t)
	{
		tmp=*p;
		*p=*t;
		*t=tmp;
		p++;
		t--;
	}
       //	puts(q);

}
int Palindrom(char *s)
{

	char *tmp;
	strcpy(tmp,s);
	StrRev(s);
	if(strcmp(tmp,s)==0)
		return 1;
	else
		return 0;
}
void main()
{
	char s[S],s1[S];
	clrscr();
	printf("Enter first string....\n");
	gets(s);
	//printf("%s",StrRev(s));
	if(Palindrom(s)==1)
		printf("\nPalindrom String...");
	else
		printf("\n not Palindrom");
      /*	printf("\nEnter second string....\n");
	gets(s1);
	if(Strcomp(s,s1)==0)
		printf("Both string are equal...");
	else if(Strcomp(s,s1)>0)
		printf("\ngreater than...");
	else
		printf("\nLess than"); */
	getch();
}