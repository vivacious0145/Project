/* Program to check number is +ve,-ve or zero */
#include<stdio.h>
    void main()
    {
        int num;
        printf("Enter any number : ?\b");
        scanf("%d",&num);
        if(num>0)
            printf("Positive Number");
        else
            if(num<0)
                printf("Negative Number");
            else
                printf("Zero");
    }