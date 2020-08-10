/* program to accept any character from user, also check and display the message whether it is capital alphabet or not */
#include<stdio.h>
    void main()
    {
        char x;
        //printf("%d",'A');
        //printf("\n%d",'Z');
        printf("\nEnter any character : ");
        x  = getch();
        if(x>64 && x<91)
        {
            printf("\nGiven charater is Capital Alphabet ");
        }
        else
            printf("\nGiven character is not Capital Alphabet"); 
    }