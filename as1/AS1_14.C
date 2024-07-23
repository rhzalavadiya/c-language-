/*find area of right triangle
05/08
rupali
*/
#include<stdio.h>
#include<conio.h>
float AreaOftriangle( float base,float height)
{

    return (base*height)/2;
}
void main()
{
	float base,height;
	clrscr();
	printf("Enter base and Height for right triangle....\n");
	scanf("%f %f",&base,&height);
	printf("area of right triangle is...%f",AreaOftriangle(base,height));
	getch();
}
/*
Enter base and Height for right triangle....
2 4                                                                             
area of right triangle is...4.000000                                            
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/