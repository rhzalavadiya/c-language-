#include<stdio.h>
#include<conio.h>
typedef struct Rational
{
	int num;
	int deno;
}Rational;
void Read(Rational *x)
{
	char slash;
	scanf("%d%c%d",&x->num,&slash,&x->deno);
}
void Print(Rational x)
{
	printf("\n%d/%d",x.num,x.deno);
}
Rational Adition(const Rational x,const Rational y)
{
	 Rational add;
	 add.num=x.num*y.deno+y.num*x.deno;
	 add.deno=x.deno*y.deno;
	 return add;
}
Rational Subtraction(const Rational x,const Rational y)
{
	 Rational sub;
	 sub.num=x.num*y.deno-y.num*x.deno;
	 sub.deno=x.deno*y.deno;
	 return sub;
}
Rational Divison(const Rational x,const Rational y)
{
	 Rational div;
	 div.num=x.num*y.deno-y.num*x.deno;
	 div.deno=x.deno*y.deno;
	 return div;
}

void main()
{
	Rational x,y,add1,sub1;
	clrscr();
	printf("\nEnter First rarional number....\n");
	Read(&x);
	printf("\nEnter second rarional number....\n");
	Read(&y);
	Print(x);
	Print(y);
	add1=Adition(x,y);
	Print(add1);
	sub1=Subtraction(x,y);
	Print(sub1);
	getch();

}