/* Program to display the ASCII value of a key pressed on the keyboard using conditional ternary operator (? :) */
#include<stdio.h>
#include<conio.h>
void main()
{
    int ch,ch1;
    printf("Pres any key on the keyboard :: ?\b");
    ch = getche();
    (ch == 0) ? (ch1 = getch() ,printf("\nASSCI Value of a key Pressed : %d %d",ch,ch1)) : (printf("\nASSCI Value of a key Pressed : %d",ch));
}