/* Program  to display the ASCII value of a key pressed on the keyboard using switch … case statement */
#include<stdio.h>
#include<conio.h>
void main()
{
    int ch,ch1;
    printf("Pres any key on the keyboard :: ?\b");
    ch = getche();
    switch (ch)
    {
    case 0:
        ch1 = getch();
        printf("\nASSCI Value of a key Pressed : %d %d",ch,ch1);
        break;
    
    default:
        printf("\nASSCI Value of a key Pressed : %d",ch);
        break;
    }
}