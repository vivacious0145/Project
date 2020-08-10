/* Program to accept any two numbers and check the highest value using if else statement */
#include<stdio.h>
    void main()
    {
        int num1,num2;
        printf("Enter the Value : ?\b");
        scanf("%d%d",&num1,&num2);
        if(num1>num2)
                printf("%d is a Highest Value\n",num1);
            else
                printf("%d is a Highest Value",num2);
    }