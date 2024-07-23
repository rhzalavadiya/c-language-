/*selection sort
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
void Selection(int a[],int s)
{
	int i,j,min,temp;
	for(i=0;i<s-1;i++)
	{
		min=i;
		for(j=i+1;j<s;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
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
	Selection(a,s);
	printf("\nAfter Sort Array Element is...\n");
	WriteArray(a,s);
	getch();
}
