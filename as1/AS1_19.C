/*calculate Volume  of cone
07/08
rupali
*/
#include<stdio.h>
#include<conio.h>
#define pi 3.14
float VolumeOfcone( const float radius,const float height)
{
    float volume;
    volume=3/(pi*radius*radius*height);
    return volume;
}
void main()
{
	float radius,height;
	clrscr();
	printf("Enter radius and height....\n");
	scanf("%f %f",&radius,&height);
	printf("volume of cone is...%f",VolumeOfcone(radius,height));
	getch();
}
/*
Enter radius and height....
3.5 6                                                                           
volume of cone is...0.012999                                                    
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/