/***********************************************************************************************
************************************************************************************************
 Program to define two variables with the initial values 20 and 30 respectively, swap 
 or interchange their values using any third variable and assignment operator...
************************************************************************************************
************************************************************************************************/
#include<stdio.h>
    void main()
    {
        int num1 = 20, num2 = 30, temp;
        printf("Value in Num1 : %d\nValue in Num2 : %d",num1,num2);
            temp = num1;
            num1 = num2;
            num2 = temp;
        printf("\nAfter swap Value in Num1 : %d",num1);
        printf("\nAfter swap Value in Num2 : %d",num2);
    }