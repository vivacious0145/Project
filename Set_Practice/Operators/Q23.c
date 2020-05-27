/* Program to accept any number from user, calculate and display the quad value of the given number */

#include<stdio.h>
    void main()
    {
        int num;
        printf("Enter any Number : ?\b");
        scanf("%d",&num);
        printf("Square Value : %d ",num*num*num*num);
    }