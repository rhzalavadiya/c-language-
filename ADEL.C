/*array
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
void Add(int a[],int s,int item,int pos)
{
	int i;
	i=s;
	while(i!=pos-1)
	{
		a[i]=a[i-1];
		i--;
	}
	a[pos-1]=item;
}
void Del(int a[],int s,int item,int pos)
{
	int j=s;
	while(j!=pos-1)
	{
		a[j]=a[j+1];
		j++;
	}
	a[pos-1]=item;
}
void main()
{
	int s,no,a1,index;
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
	printf("\nEnter element for add....\n");
	scanf("%d",&no);
	printf("\nEnter index....\n");
	scanf("%d",&index);
	Add(a,s,no,index);
	printf("\nArray Element is...\n");
	WriteArray(a,s+1);
	printf("\nEnter element for delet....\n");
	scanf("%d",&no);
	printf("\nEnter index....\n");
	scanf("%d",&index);
	Del(a,s,no,index);
	printf("\nArray Element is...\n");
	WriteArray(a,s-1);
	getch();
}