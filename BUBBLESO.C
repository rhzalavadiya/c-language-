/*bubble sort
18/08
rupali
*/
#include<stdio.h>
#include<conio.h>
#define S 50
void ReadArray(int a[],int s)
{
	int i;
	for(i=0;i<s;i++)
		scanf("%d",&a[i]);
}
void WriteArray(int a[],int s)
{
	int i;
	for(i=0;i<s;i++)
		printf("%5d",a[i]);
}
void Bubble(int a[],int s)
{
	int i,temp,j;
	for(i=0;i<s-1;i++)
	{
		for(j=0;j<s;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void main()
{
	int s;
	int a[S];
	do
	{
	clrscr();
	printf("Enter array size....\n");
	scanf("%d",&s);
		if(s>S || s<1)
		{
			printf("\nYou Enter Wrong Size....");
			printf("\nEnter array size....\n");
			scanf("%d",&s);
		}
	}
	while(s>S || s<1);
	printf("Enter Array Element...\n");
	ReadArray(a,s);
	printf("\nArray Element is...\n");
	WriteArray(a,s);
	Bubble(a,s);
	printf("\nAfter Sort Array Element is...\n");
	WriteArray(a,s);
	getch();
}
