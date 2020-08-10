/* Program to check whether the given number is even, odd or zero*/
#include<stdio.h>
    void main()
    {
        int num;
        printf("Enter a number : ?\b");
        scanf(
            "%d",&num
        );
        if(num==0)
            printf("Given Number is Zero");
        else
            if(num%2 == 0)
                printf("\nGiven Number is Even");
            else
                printf("\nGiven Number is Odd");
    }