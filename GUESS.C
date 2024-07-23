#include<stdio.h>
#include<conio.h>
#include<math.h>
/*int GenerateRandom()
{
	int i,random;
	for(i=0; i<rand()%rand()-; i++)
	{
		random = rand()%100;
		printf("%3d%3d\n",i,random);
	}
	return random;
}  */
void main()
{
	int random,user,i=0,j;
	clrscr();
	printf("\n%d",random);
	//random=GenerateRandom();
	random%=100;
	printf("\n%d",random);

	do
	{
		if(i==5)
		{
			printf("\nComputer Won.....");
			break;
		}
		printf("\nEnter Any Number Between 1 to 100\n");
		scanf("%d",&user);
		if(user<1||user>100)
			printf("\nInvalid Number...");
		else if(user<random)
			printf("\nGuess is Low....");
		else if(user>random)
			printf("\nGuess is High....");
		else
		{
			printf("\nUser Win...");
			break;
		}
		i++;
	}
	while(user!=random);
	getch();
}