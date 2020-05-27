/*  Program to accept three digit from user and diplay the sum of all digits */

#include<stdio.h>
    void main()
    {
        int digi,fir,mid,las;
        printf("Enter any three digits : ?\b");
        scanf("%3d",&digi);
            fir = digi/100;
            mid = digi/10;
            mid %= 10;
            las = digi%10;
        printf("Sum of all digits is : %d",fir+mid+las);
    }