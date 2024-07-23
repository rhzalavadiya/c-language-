/* print add,sub,mul,div
rupali
5/8
*/
#include<stdio.h>
#include<conio.h>
int Add(const int n1,const int n2)
{
       int amount;
       amount=n1+n2;
       return amount;
}
int Sub(const int n1,const int n2)
{
       int amount;
       amount=n1-n2;
       return amount;
}
int Mul(const int n1,const int n2)
{
       int amount;
       amount=n1*n2;
       return amount;
}
int Div(const int n1,const int n2)
{
       int amount;
       amount=n1/n2;
       return amount;
}
float Addf(const float num1,const float num2)
{
       float amount;
       amount=num1+num2;
       return amount;
}
float Subf(const float num1,const float num2)
{
       float amount;
       amount=num1-num2;
       return amount;
}
float Mulf(const float num1,const float num2)
{
       float amount;
       amount=num1*num2;
       return amount;
}
float Divf(const float num1,const float num2)
{
       float amount;
       amount=num1/num2;
       return amount;
}
void main()
{       float num1,num2;
	int n1,n2;
	clrscr();
	printf("Enter two value....\n");
	scanf("%d %d",&n1,&n2);
	printf("\nAdd : %d",Add(n1,n2));
	printf("\nSub : %d",Sub(n1,n2));
	printf("\nMul : %d",Mul(n1,n2));
	printf("\nDiv : %d",Div(n1,n2));
	printf("\nEnter two value....\n");
	scanf("%f %f",&num1,&num2);
	printf("\nAdd : %f",Addf(num1,num2));
	printf("\nSub : %f",Subf(num1,num2));
	printf("\nMul : %f",Mulf(num1,num2));
	printf("\nDiv : %f",Divf(num1,num2));
	getch();
}
/*Enter two value....
10 4                                                                            
                                                                                
Add : 14                                                                        
Sub : 6                                                                         
Mul : 40                                                                        
Div : 2                                                                         
Enter two value....                                                             
10.5 2.5                                                                        

Add : 10.500000                                                                 
Sub : 8.000000                                                                  
Mul : 32.249999                                                                 
Div : 10.500000                                                                 
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                





		  */
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
