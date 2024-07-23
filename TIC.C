#include<stdio.h>
#include<conio.h>
void Board(char a[20])
{
	printf("\n	|	|	");
	printf("\n   %c    |   %c   |   %c  ",a[1],a[2],a[3]);
	printf("\n________|_______|_______");
	printf("\n	|	|	");
	printf("\n   %c    |   %c   |   %c  ",a[4],a[5],a[6]);
	printf("\n________|_______|_______");
	printf("\n	|	|	");
	printf("\n   %c    |   %c   |   %c  ",a[7],a[8],a[9]);
	printf("\n     	|	|	");
}
int Checkwin(char a[20])
{
	if(a[1]==a[2] && a[2]==a[3])
		return 1;
	else if(a[4]==a[5] && a[5]==a[6])
		return 1;
	else if(a[7]==a[8] && a[8]==a[9])
		return 1;
	else if(a[1]==a[4] && a[4]==a[7])
		return 1;
	else if(a[2]==a[5] && a[5]==a[8])
		return 1;
	else if(a[3]==a[6] && a[6]==a[9])
		return 1;
	else if(a[1]==a[5] && a[5]==a[9])
		return 1;
	else if(a[3]==a[5] && a[5]==a[7])
		return 1;
	else if(a[1]!='1' && a[2]!='2'&& a[3]!='3' && a[4]!='4'&& a[5]!='5' && a[6]!='6'&& a[7]!='7' && a[8]!='8'&& a[9]!='9')
		return -1;
	else
		return 0;
}
void main()
{
	char a[]={'0','1','2','3','4','5','6','7','8','9'};
	int p=1,ch,flag=0;
	do
	{
		clrscr();
		printf("Palyer 1 : \'X\' And Player 2 : \'O\'\n");
		if(p%2==0)
			printf("\nPlayer 2 Chance....");
		else
			printf("\nPlayer 1 Chance....");
		Board(a);
		printf("\nEnter Your Choice....\n");
		scanf("%d",&ch);
		if(a[ch]!='X'&& a[ch]!='O')
		{
			if(p%2==0)
			{
				a[ch]='O';
				p++;
			}
			else
			{
				a[ch]='X';
				p++;
			}
		}
		else
		{
			printf("\nSorry the Row %d is already marked with %d",ch,a[ch]);
		}
		flag=Checkwin(a);
	}
	while(flag==0);
	clrscr();
	Board(a);
	if(flag==1)
		printf("\nPalyer %d is Win...",(p%2)+1);
	else
		printf("\nDRAW");
	getch();
}