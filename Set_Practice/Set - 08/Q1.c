/* Program to accept any year from user, also check and display the message whether it is a leap year or not */
#include<stdio.h>

    void main()
    {
        int year;
        printf("Enter the Year : ?\b");
        scanf("%d",&year);
        if(year%400 == 0)
            printf("Enter Year is a leap Year ");
        else if(year%100 != 0)
            printf("Enter Year is a leap Year ");
        else if(year%4 == 0)
            printf("Enter is leap Year");
        else
            printf("Enter Year is a Not leap Year ");
    }