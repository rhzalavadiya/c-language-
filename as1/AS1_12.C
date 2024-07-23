/*read radius and calculate formula
05/08
rupali
*/
#include<stdio.h>
#include<conio.h>
#define pi 3.14
float VolumeOfr( float radius)
{
    float volume;
    volume=(pi*radius*radius*radius*4)/3;
    return volume;
}
void main()
{
	float radius;
	clrscr();
	printf("Enter radius....\n");
	scanf("%f",&radius);
	printf("area of circle is...%f",VolumeOfr(radius));
	getch();
}
/*
Enter radius....
5.6                                                                             
area of circle is...735.245605                                                  
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/