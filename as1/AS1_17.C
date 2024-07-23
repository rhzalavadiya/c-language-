  /*convert KM to Meters and feet...
07/08
rupali
*/
#include<stdio.h>
#include<conio.h>
float KMtoMt( const float km)
{
    float meter;
    meter=km*1000;
    return meter;
}
float KMtofeet( const float km)
{
    float feet;
    feet=km*3280.84;
    return feet;
}
void main()
{
	float km;
	clrscr();
	printf("Enter Kilometer....\n");
	scanf("%f",&km);
	printf("KM to Meter....%f",KMtoMt(km));
	printf("\nKM to Feet.....%f",KMtofeet(km));
	getch();
}
/*
Enter Kilometer....
4.5                                                                             
KM to Meter....4500.000000                                                      
KM to Feet.....14763.780273                                                     
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/