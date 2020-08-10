/* Write a program that terminates the application on pressing the ALT + F4 key */
#include<stdio.h>
#include<conio.h>
void main()
{
    int ch,ch1;
    printf("Press Alt + F4 to exit the Program");
    start :
    ch = getch();
    if(ch == 0)
    {
        ch1 = getch();
        if(ch1 == 107)
            exit(1);
    }
    else
        goto start;
}