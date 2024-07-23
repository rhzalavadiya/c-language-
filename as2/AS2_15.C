/* find root of Quadratic equaton
 09/08
 rupali
*/
#include<stdio.h>
#include<conio.h>
void RootQua(const float no1,const float no2,const float no3)
{
	float root1,root2,dis,real,img;
	dis=no2*no2-4*no1*no3;
	if(dis>0)
	{
		root1=(-no2+sqrt(dis))/(2*no1);
		root2=(-no2-sqrt(dis))/(2*no1);
		printf("\nAnswer is...%f ,  %f",root1,root2);
	}
	else if(dis==0)
	{
		printf("\nThe Root is not Possible....");
	}
	else
	{
		real=-no2/(2*no1);
		img=sqrt(-dis)/(2*no1);
		printf("root1 and root2 Answer is...%f %f",real,img);
	}
}
void main()
{
	float no1,no2,no3;
	clrscr();
	printf("Enter Three Number....\n");
	scanf("%f %f %f",&no1,&no2,&no3);
	RootQua(no1,no2,no3);
	getch();
}
/*
Enter Three Number....
6 8 1                                                                           
                                                                                
Answer is...-2720.000000 ,  2718.666748                                         
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/