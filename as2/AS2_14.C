
/* find alphabets is vovel or not
 09/08
 rupali
*/
#include<stdio.h>
#include<conio.h>
void Vovel(const char ch)
{
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		printf("Vovel");
	else
		printf("Not Vovel");
}
void main()
{
	char ch
	clrscr();
	printf("Enter Any Charcter....\n");
	scanf("%c",&ch);
	Vovel(ch);
	getch();
}
/*
Enter Any Charcter....
a                                                                               
Vovel                                                                           
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/