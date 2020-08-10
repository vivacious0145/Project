#include<stdio.h>
    void main()
    {
        int num1 = 20, num2 = 30;
        printf("Value in Num1 : %d\nValue in Num2 : %d",num1,num2);
            num1 *= num2;   //600 
            num2 = num1/num2;   //20
            num1 = num1/num2;   //30
        printf("\nAfter swap Value in Num1 : %d",num1);
        printf("\nAfter swap Value in Num2 : %d",num2);
    }