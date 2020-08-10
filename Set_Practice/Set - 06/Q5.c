/*  Program to accept three digit from user and diplay the sum of first and last digit */

#include<stdio.h>
    void main()
    {
        int digi,fir,las;
        printf("Enter any three digits : ?\b");
        scanf("%3d",&digi);
            fir = digi/100;
            las = digi%10;
        printf("Sum of first and last digits is : %d",fir+las);
    }