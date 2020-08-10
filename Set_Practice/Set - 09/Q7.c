/* Program that changes the background color on pressing Ctrl + C key */
#include<stdio.h>
#include<conio.h>
void main()
{
    int ch;
    printf("Press Ctrl + C key to change the backgroud color : ");
    if(ch == 3)
        textbackgroud(4);
}