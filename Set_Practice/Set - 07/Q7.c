/* Program to accept any five numbers and check the highest value using if else statement */
#include<stdio.h>
    void main()
    {
        int num1,num2,num3,num4,num5;
        printf("Enter the Value : ?\b");
        scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
        printf("num1 = %d\n",num1);
        printf("num2 = %d\n",num2);
        printf("num3 = %d\n",num3);
        printf("num4 = %d\n",num4);
        printf("num5 = %d\n",num5);
        //printf("%d",sizeof(num5));
        
        if(num1>num2)
            if(num1>num3)
                if(num1>num4)
                    if(num1>num5)
                        printf("%d is a Highest Value\n",num1);
                    else
                        printf("%d is a Highest Value",num5);
                else
                    if(num4>num5)
                        printf("%d is a Highest Value\n",num4);
                    else
                        printf("%d is a Highest Value",num5);
            else
                if(num3>num4)
                    if(num3>num5)
                        printf("%d is a Highest Value",num3);
                    else
                        printf("%d is a Highest Value",num5);
                else
                    if(num4>num5)
                        printf("%d is a Highest Value",num4);
                    else
                        printf("%d is a Highest Value",num5);      
        else
            if(num2>num3)
                if(num2>num4)
                    if(num2>num5)
                        printf("%d is a Highest Value",num2);
                    else
                        printf("%d is a Highest Value",num5); 
                else 
                    if(num4>num5)
                        printf("%d is a Highest Value",num4);
                    else
                        printf("%d is a Highest Value",num5);
            else
                if(num3>num4)
                    if(num3>num5)
                        printf("%d is a Highest Value",num3);
                    else
                        printf("%d is a Highest Value",num5);
                else
                    if(num4>num5)
                        printf("%d is a Highest Value",num4);
                    else
                        printf("%d is a Highest Value",num5);      
    }