/* program to accept any character from user, also check and display the message whether it is a digit or not */
#include<stdio.h>
    void main()
    {
        char x;
       
        printf("Enter any character : ");
        x  = getch();
        //printf("\n%d",x);
        
        if(x>47 && x<58)
        {
            printf("\nEnter charater is digit ");

        }
        else
            printf("\nEnter character is not digit"); 
    }