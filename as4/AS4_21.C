/*print pattren
Rupali
13/08
OUTPUT :
-----------------
       *
      * *                                                                       
     * * *                                                                      
    * * * *                                                                     
   * * * * *
  * * * * * *                                                                   
   * * * * *                                                                    
    * * * *                                                                     
     * * *                                                                      
      * *                                                                       
       *                                                                        
                                                                                
Do You Want To Countinue..(Y/N)                                                 
*/
#include<stdio.h>
#include<conio.h>
void Print(int l)
{
	int r,c,k;
	for(r=1;r<=l;r++)
	{
		for(c=r;c<=l;c++)
		{
			printf(" ");
		}
		for(k=1;k<=r;k++)
		{
			printf(" *");
		}
		printf("\n");
	}
	for(r=l-1;r>=1;r--)
	{
		for(c=l;c>=r;c--)
		{
			printf(" ");
		}
		for(k=1;k<=r;k++)
		{
			printf(" *");
		}
		printf("\n");
	}

}
void main()
{
	char ch;
	do
	{
		clrscr();
		Print(6);
		printf("\nDo You Want To Countinue..(Y/N)");
		ch=getch();
	}
	while(ch!='y'&&ch!='Y'&&ch!='n'&ch!='N');
	getch();
}