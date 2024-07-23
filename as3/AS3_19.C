void Octal(int no,int base)
{
	int rem;
	if(no==0)
		return;
	else
	{
		rem=no%base;
		Octal(no/base,base);
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
		printf("\nOctal Number is.....");
		Octal(no,base);
		printf("\ndo You Want to continue...(Y/N)\n");
		ch=getch();
	}
	while(ch!='n' && ch!='N'&& ch!='y' && ch!='Y');
	getch();
}
/*

Enter Number......78                                                            
                                                                                
Enter Base......8                                                               
                                                                                
Octal Number is.....116                                                         
do You Want to continue...(Y/N)                                                 

                                                                                
                                                                                
                                                                                
                                                                                

*/