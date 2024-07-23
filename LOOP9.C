/*
Do while Loop menu driven Program
10/08
Rupali
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
float AreaOfCir(const float radius)
{
	return(PI*radius*radius);
}
float AreaOfTri(const float base,const float height)
{
	return (base*height)/2;
}
float Sphere(const float radius)
{
	return (PI*radius*radius*radius*4)/3;
}
float Cylinder(const float radius,const float height)
{
	return(PI*radius*radius*height);
}
float SimpleIn(const float price,const float rate,const float year)
{
	return (price*rate*year)/100;
}
float CompoundIn(const float price,const float rate,const float year)
{
	return price*(pow(1+rate/100),year)-price;
}
void MainMenu()
{
	printf("\n1.Area...");
	printf("\n2.Volume.");
	printf("\n3.Interest...");
	printf("\n4.Exit.");
	printf("\nEnter  Your Choice...\n");
}
void AreaMenu()
{
	printf("\n1.Area Of Circle...");
	printf("\n2.Area Of Triangle.");
	printf("\n3.Exit.");
	printf("\nEnter  Your Choice...\n");
}
void VolumeMenu()
{
	printf("\n1.Volume of sphere...");
	printf("\n2.Volume of cylinder.");
	printf("\n3.Exit.");
	printf("\nEnter  Your Choice...\n");
}
void InterestMenu()
{
	printf("\n1.simple Interest...");
	printf("\n2.compound Interest.");
	printf("\n3.Exit.");
	printf("\nEnter  Your Choice...\n");
}
void main()
{
	int ch,ach,vch,ich;
	float radius,base,height,price,rate,year;
	do
	{
		clrscr();
		MainMenu();
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				do
				{
					clrscr();
					AreaMenu();
					scanf("%d",&ach);
					switch(ach)
					{
						case 1:
							printf("\nEnter Radius....\n");
							scanf("%f",&radius);
							printf("\nArea Of circle...%f",AreaOfCir(radius));
						break;
						case 2:
							printf("\nEnter base and height....\n");
							scanf("%f %f",&base,&height);
							printf("\nArea Of circle...%f",AreaOfTri(base,height));
						break;
						case 3:
						break;
						default :
							printf("\n Wrong Choice..");
					}
					if(ach!=3)
					getch();
				}
				while(ach!=3);
			break;
			case 2:
				do
				{
					clrscr();
					VolumeMenu();
					scanf("%d",&vch);
					switch(vch)
					{
						case 1:
							printf("\nEnter Radius....\n");
							scanf("%f",&radius);
							printf("\nVolume Of Sphere...%f",Sphere(radius));
						break;
						case 2:
							printf("\nEnter radius and height....\n");
							scanf("%f %f",&radius,&height);
							printf("\nVolume Of Cylinder...%f",Cylinder(radius,height));
						break;
						case 3:
						break;
						default :
							printf("\n Wrong Choice..");
					}
					if(vch!=3)
					getch();
				}
				while(vch!=3);
			break;
			case 3:
				do
				{
					clrscr();
					InterestMenu();
					scanf("%d",&ich);
					switch(ich)
					{
						case 1:
							printf("\nEnter price rate and Year....\n");
							scanf("%f %f %f",&price,&rate,&year);
							printf("\nsimple Interest...%f",SimpleIn(price,rate,year));
						break;
						case 2:
							printf("\nEnter price rate and Year....\n");
							scanf("%f %f %f",&price,&rate,&year);
							printf("\nCompound Interest...%f",CompoundIn(price,rate,year));
						break;
						case 3:
						break;
						default :
							printf("\n Wrong Choice..");
					}
					if(ich!=3)
					getch();
				}
				while(ich!=3);
			break;
			case 4:
				exit(0);
			break;
			default:
				printf("\nWrong Choice....");
		}
		if(ch!=4)
			getch();
	}
	while(ch!=4);
	getch();
}