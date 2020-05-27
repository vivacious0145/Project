/* Program to find out ASSCI Value of any arrow keys */
#include<stdio.h>
#include<conio.h>
void main()
{
    int ch1, ch2;
    clrscr();
    printf("Enter any arrow keys :: ?\b");
    ch1 = getch();

	if (ch1 == 0)
	{
	printf("\nFirst ASSCI Value :: %d",ch1);
	ch2 = getch();
	printf("\nSecond ASSCI Value :: %d",ch2);
	}
	else
	printf("\nInvalid Key");
	delay(1000);
 }