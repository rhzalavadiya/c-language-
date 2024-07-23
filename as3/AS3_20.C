/* print decimal to hexa decimal
12/08
Rupali
*/
#include<stdio.h>
#include<conio.h>
void Hexadecimal(int no,int base)
{
	int rem;
	if(no==0)
		return;
	else
	{
		rem=no%base;
		Hexadecimal(no/base,base);
		if(rem<10)
			printf("%d",rem);
		else
			printf("%c",rem+55);
	}
}
void main()
{
	int no,base;
	char ch;
	do
	{
		clrscr();
		printf("\nEnter Number......");
		scanf("%d",&no);
		printf("\nEnter Base......");
		scanf("%d",&base);
		printf("\nHexadecimal Number is.....");
		Hexadecimal(no,base);
		printf("\ndo You Want to continue...(Y/N)\n");
		ch=getch();
	}
	while(ch!='n' && ch!='N'&& ch!='y' && ch!='Y');
	getch();
}
/*

Enter Number......15                                                            
                                                                                
Enter Base......16                                                              
                                                                                
Hexadecimal Number is.....F                                                     
do You Want to continue...(Y/N)
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/