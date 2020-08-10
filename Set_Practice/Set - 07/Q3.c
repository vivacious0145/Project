/* Program to check whether the given number is  whether it is +ve even, -ve even, +ve odd, -ve od*/
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
            if(num<0)
                if(num%2 == 0)
                    printf("\nGiven Number is -ve Even");
                else
                    printf("\nGiven Number is -ve Odd");
            else
                if(num%2 == 0)
                    printf("\nGiven Number is +ve Even");
                else
                    printf("\nGiven Number is +ve Odd");
    }