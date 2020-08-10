/***********************************************************************
************************************************************************
Program to display “LOGIC” 5 times using for loop but the word should 
be displayed one by one automatically after the delay of a second...
*************************************************************************
************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    for(i = 1; i <= 5; i++)
    {
        printf("LOGIC\n");
        sleep(1);
    }
}