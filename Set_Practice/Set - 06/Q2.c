/*  Program to accept three digit from user and diplay the last digit */

#include<stdio.h>
    void main()
    {
        int digi;
        printf("Enter any three digits : ?\b");
        scanf("%3d",&digi);
        printf("Last digit is : %d",digi%10);
    }