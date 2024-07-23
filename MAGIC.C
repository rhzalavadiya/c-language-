#include<stdio.h>
#include<conio.h>
#define S 50
void ReadArray(int a[S][S],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
}
void PrintArray(int a[S][S],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	}
}
int Magic(int a[][S],int r,int c)
{
	int a1[S],i,j,sum=0,k=0,ans;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum+=a[i][j];
		}
		a1[k]=sum;
		sum=0;
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum+=a[j][i];
		}
		k++;
		sum=0;
	}
	j=0;
	for(i=0;i<r;i++)
	{
		while(j==i)
		{
			sum+=a[i][j];
			j++;
		}
	}
	a1[k]=sum;
	k++;
	sum=0;
	j=0;
	for(i=r-1;i>=0;i--)
	{
		sum+=a[i][j];
		j++;
	}
	a1[k]=sum;
	k++;
	sum=0;
	for(i=0;i<k;i++)
	{
		if(a[i]!=a[i+1])
			return ans=1;
	}
	return ans=0;
}
void main()
{
	int r,c,a1;
	int a[S][S];
	clrscr();
	printf("Enter Row and Colum....\n");
	scanf("%d %d",&r,&c);
	printf("\nEnter Array Element....");
	PrintArray(a,r,c);
	ReadArray(a,r,c);
	a1=Magic(a,r,c);
	if(a1==1)
		printf("\nMagic Matrix....");
	else
		printf("\nNot a Magic Matrix....");
	getch();
}