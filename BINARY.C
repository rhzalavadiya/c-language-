/*binary search
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
		for(j=0;j<s-i-1;j++)
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
int Binary(int a[],int s,int search)
{
	int min,max,mid,found=0;
	min=0;
	max=s-1;
	while(max>=min)
	{
		mid=(min+max)/2;
		if(a[mid]==search)
		{
			found=1;
			break;
		}
		else if(search<a[mid])
			max=mid-1;
		else
			min=mid+1;
	}
	return found;
}
void main()
{
	int s,search,a1;
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
	Bubble(a,s);
	printf("\nAfter Sort Array Element is...\n");
	WriteArray(a,s);
	printf("\nEnter Array Element for search...\n");
	scanf("%d",&search);
	a1=Binary(a,s,search);
	if(a1==1)
		printf("\nElement Found...");
	else
		printf("\nElement Not Found...");
	getch();
}
