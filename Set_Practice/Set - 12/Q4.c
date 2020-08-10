/***************************************************************************
**************************************************************************** 
Program to display the word “LOGIC” 5 times using while loop but the word 
should be displayed one by one on pressing any key on the keyboard....!! 
****************************************************************************
****************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{    
    int x = 1;
    //printf("\nLOGIC");
    
    while(getch(), kbhit())
    {
        printf("\nLOGIC");
        getch();
    }
}