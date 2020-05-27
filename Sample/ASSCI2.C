/* Program to find out any double ASSCI Value */
#include<stdio.h>
#include<conio.h>
void main()
{
	int ch, ch2;
	START :
	clrscr();
	printf("Enter any key");
	ch = getche();
	if(ch == 0)
	{
		ch2 = getche();
		printf("\nFirst ASSCI Value : %d",ch);
		printf("\nSecond ASSCI Value : %d",ch2);
	}
	else
	{
		printf("\nInvalid key");
		goto START;
	}
	delay(2000);
}