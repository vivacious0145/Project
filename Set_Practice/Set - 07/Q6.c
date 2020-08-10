/* Program to accept any four numbers and check the highest value using if else statement */
#include<stdio.h>
    void main()
    {
        int num1,num2,num3,num4;
        printf("Enter the Value : ?\b");
        scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
        if(num1>num2)
            if(num1>num3)
                if(num1>num4)
                    printf("%d is a Highest Value\n",num1);
                else
                    printf("%d is a Highest Value",num4);
            else
                if(num3>num4)
                    printf("%d is a Highest Value\n",num3);
                else
                    printf("%d is a Highest Value",num4);
        else
            if(num2>num3)
                if(num2>num4)
                    printf("%d is a Highest Value",num2);
                else
                    printf("%d is a Highest Value",num4);
            else
                if(num3>num4)
                    printf("%d is a Highest Value",num3);
                else
                    printf("%d is a Highest Value",num4);        
    }