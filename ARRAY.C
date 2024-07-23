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
void main()
{
	int s;
	int a[S];
	clrscr();
	printf("Enter array size....\n");
	scanf("%d",&s);
	do
	{
		if(s>S || s<0)
		{
			printf("\nYou Enter Wrong Size....");
			printf("\nEnter array size....\n");
			scanf("%d",&s);
		}
	}
	while(s>S || s<0);
	printf("Enter Array Element...\n");
	ReadArray(a,s);
	printf("Array Element is...\n");
	WriteArray(a,s);
	getch();
}