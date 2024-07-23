#include<stdio.h>
#include<conio.h>
#include<math.h>
int CircularPrime(const long int no)
{
       long int temp=no,pos=0,i,rem;
	while(temp!=0)
	{
		pos++;
		temp=temp/10;
	}
	temp=no;
	for(i=1;i<=pos;i++)
	{
		if(!Prime(temp))
			return 0;
		rem=temp%10;
		temp=temp/10+rem*pow(10,pos-1);
	}
	return 1;
}
int Prime(long int no)
{
	long int i;
	if(no%2==0||no%3==0)
		return 0;
	if(no<=3)
		return 1;
	for(i=5;i*i<=no;i+=6)
	{
		if(no%i==0 || no%(i+2)==0)
			return 0;
	}
	return 1;
}
void main()
{
	long int no;
	clrscr();
	for(no=100;no<=99999;no++)
	{
		if(CircularPrime(no))
			printf("\t%ld",no);
	}
	getch();
}