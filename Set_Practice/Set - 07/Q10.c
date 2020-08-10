/* program to accept any character from user, also check and display the message whether it is small alphabet or not */
#include<stdio.h>
    void main()
    {
        char x;
       
        printf("Enter any character : ");
        x  = getch();
        if(x>96 && x<123)
        {
            printf("\nGiven charater is Small Alphabet ");
        }
        else
            printf("\nGiven character is not Small Alphabet"); 
    }