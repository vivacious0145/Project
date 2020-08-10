/*  Program to accept three digit from user and diplay the first digit */

#include<stdio.h>
    void main()
    {
        int digi;
        printf("Enter any three digits : ?\b");
        scanf("%3d",&digi);
        printf("first digit is : %d",digi/100);
    }
