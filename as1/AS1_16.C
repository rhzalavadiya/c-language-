/*calculate Volume  of cyliender
07/08
rupali
*/
#include<stdio.h>
#include<conio.h>
#define pi 3.14
float VolumeOfcyl( const float radius,const float height)
{
    float volume;
    volume=pi*radius*radius*height;
    return volume;
}
void main()
{
	float radius,height;
	clrscr();
	printf("Enter radius and height....\n");
	scanf("%f %f",&radius,&height);
	printf("volume of circle is...%f",VolumeOfcyl(radius,height));
	getch();
}
/*
Enter radius and height....
2.3 5                                                                           
volume of circle is...83.052994                                                 
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/