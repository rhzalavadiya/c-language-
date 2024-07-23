/* print area of cube
rupali
5/8
*/
#include<stdio.h>
#include<conio.h>
int VolumeOfcube(const int length,const int base,const int height)
{
       int volume;
       volume=length*base*height;
       return volume;
}
void main()
{
	int length,base,height;
	clrscr();
	printf("Enter lenth base and height of cube....\n");
	scanf("%d%d%d",&length,&base,&height);
	printf("\nVolume of Cube is : %d",VolumeOfcube(length,base,height));
	getch();
}
/*
Enter lenth base and height of cube....
12                                                                              
3                                                                               
4                                                                               
                                                                                
Volume of Cube is : 144                                                         
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/