/*STRLEN*/
#include<stdio.h>
#include<conio.h>
#define S 50
void Trim(char *p)
{
	char *t,*q;
	int flag;
	q=t;
	flag=1;
	while(*p==' ')
	p++;
	while(*p!='\0')
	{
		if(*p==' '&& flag=1 )
		{
			*t=*p;
			p++;
			t++;
			flag=0;
		}
		else if(*p!=' ')
		{
			*t=*p;
			t++;
			p++;
			flaf=1;
		}
		else
			p++;
	}
	*t='\0';
	t=q;
	puts(t);
}
int StrLen(char a[S])
{
	int l=0;
	while(a[l]!='\0')
	{
		l++;
	}
	return l;
}
void Strcpy(char a[S])
{
	char des[S];
	int i=0;
	while(a[i]!='\0')
	{
		des[i]=a[i];
		i++;
	}
	des[i]='\0';
	printf("%s",des);
}
void Toupper(char a[S])
{
	int i=0;
	while(a[i]!='\0')
	{
		if('a'<=a[i] && a[i]<='z')
			putchar(a[i]-32);
		else
			putchar(a[i]);
		i++;
	}
}
void Tolower(char a[S])
{
	int i=0;
	while(a[i]!='\0')
	{
		if('A'<=a[i] && a[i]<='Z')
			putchar(a[i]+32);
		else
			putchar(a[i]);
		i++;
	}
}
int Count(char a[])
{
	int i=0,count=0;
	while(a[i]!='\0')
	{
		while(isspace(a[i]))
			i++;
		if(a[i]!='\0')
		{
			count++;
			while(!isspace(a[i])&& a[i]!='\0')
				i++;
		}
	}
	return count;
}
void ToUpper(char *str)
{
	while(*str!='\0')
	{
		if(*str>='a'&& *str<='z')
		{
			*str=*str-32;
		}
		*str++;
	}
	*str='\0';
}
void ToLower(char *str)
{
	while(*str!='\0')
	{
		if(*str>='A'&& *str<='Z')
		{
			*str=*str+32;
		}
		*str++;
	}
	*str='\0';
}
void Strcat(char a[S],char b[S])
{
	int i,j;
	for(i=0;a[i]!='\0';i++) {}
	for(j=0;b[j]!='\0';j++)
	{
		a[i]=b[j];
		i++;
	}
	a[i]='\0';
	printf("\nAfter Concate the string...%s",a);
}
void StrCat(char *des,char *src)
{
	while(*des!='\0')
		des++;
	while(*src!='\0')
	{
		*des=*src;
		des++;
		src++;
	}
	*des='\0';
	//printf("%s",des);
}
void StrCpy(char *des,char *src)
{
	while(*src!='\0')
	{
		*des=*src;
		des++;
		src++;
	}
	*des='\0';
}
void Remove(char a[S])
{
	char s[S];
	int i=0,j=0;
	while(a[i]==' ')
	{
		i++;
	}
	while(a[i]!='\0')
	{
		if(a[i]!=' ')
			s[j++]=a[i++];
		else
		{
			while(a[i]==' ')
			{
				i++;
			}
			s[j++]=' ';
		}
	}
	s[j]='\0';
	printf("\nRemove Extra Space...%s\n",s);
}
void Proper(char a[S])
{
	int i;
	if(a[0]>='a' && a[0]<='z')
		a[0]=a[0]-32;
	for(i=1;a[i]!='\0';i++)
	{
		if(a[i]==' ' && a[i+1]>='a' && a[i+1]<='z')
			a[i+1]=a[i+1]-32;
	}
	printf("\nProper Format of String...\n%s",a);
}
void ToProper(char *p)
{
	if(*p>='a'&& *p<='z')
	{
		*p=*p-32;
		p++;
	}
	else
		p++;
	while(*p!='\0')
	{
		if(*p!=' ')
		{
			if(*(p-1)==' '&& (*p>='a'&& *p<='z'))
			{
				*p=*p-32;
				p++;
			}
			else if(*(p-1)!=' '&&(*p>='A'&& *p<='Z'))
			{
				*p=*p+32;
				p++;
			}
			else
			{
				p++;
			}
		}
		else
			p++;
	}
}
void main()
{
	char a[S],b[S];
	clrscr();
	printf("Enter Any String...\n");
	gets(a);
	Remove(a);
	//ToProper(a);
	//puts(a);
	/*ToUpper(a);
	puts(a);
	ToLower(a);
	puts(a);
	printf("\nEnter Any String...\n");
	gets(b);
	printf("\n***********************\n");
	printf("String lenght is....%d",StrLen(a));
	printf("\n***********************\n");
	printf("\nCopy the String....");
	Strcpy(a);
	StrCpy(a,b);
	puts(a);
	printf("\n***********************\n");
	printf("\nLower case String....");
	Tolower(a);
	printf("\n***********************\n");
	printf("\nUpper case String....");
	Toupper(a);
	printf("\n***********************\n");
	printf("\nCount The Word....%d",Count(a));
	printf("\n***********************\n");
	Strcat(a,b);
	printf("\n***********************\n");
	StrCat(a,b);
	printf("\n***********************\n");
	Remove(a);
	printf("\n***********************\n");
	Proper(a);  */
	getch();
}