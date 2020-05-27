/* Program to exit from any program using Alt+F4 keys */
#include<stdio.h>
#include<conio.h>
void main()
{
	int ch,ch2;
	START :		//Label
	clrscr();
	printf("Enter Alt + F4 to exit ");
	ch = getch();
	if(ch == 0)
	{
		ch2 = getch();
		if(ch2 == 107)
		{
			exit(1);
		}

	}
	goto START;

}