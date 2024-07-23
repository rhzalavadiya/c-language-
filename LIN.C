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
int Linear(int a[],int s,int no)
{
	int i;
	for(i=0;i<s;i++)
	{
		if(a[i]==no)
		return i+1;
	}
	return 0;
}
void main()
{
	int s,no,a1;
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
	printf("\nEnter element for search....\n");
	scanf("%d",&no);
	printf("Array Element is...\n");
	WriteArray(a,s);
	a1=Linear(a,s,no);
	if(a1>0)
		printf("\nAvalable on %d  and %d",a1,no);
	else
		 printf("\nnot Avalable");
	getch();
}