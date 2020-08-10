/******************************************************************************************************
*******************************************************************************************************
Program to display the word “LOGIC” continuously until any key is pressed on the keyboard, use do while 
and the each word should be displayed one by one automatically after the delay of 500 milliseconds...
*******************************************************************************************************
*******************************************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
    do
    {
        printf("LOGIC\n");
        //delay(500);
        sleep(1);
    } while (!kbhit());
}