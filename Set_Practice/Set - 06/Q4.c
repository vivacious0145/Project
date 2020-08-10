/*  Program to accept three digit from user and diplay the middle digit */

#include<stdio.h>
    void main()
    {
        int digi;
        printf("Enter any three digits : ?\b");
        scanf("%3d",&digi);
        printf("Middle digit is : %d",digi/10%10);
    }