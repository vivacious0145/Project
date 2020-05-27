//Simple arithmetical operations

#include<stdio.h>
    void main()
    {
        int num1,num2;
        printf("Enter the first value : ?\b");
        scanf("%d",&num1);
        printf("\nEnter the second value : ?\b");
        scanf("%d",&num2);
        printf("\nSum = %d",num1+num2);
        printf("\nSubtraction = %d",num1-num2);
        printf("\nMultiplication = %d",num1*num2);
        printf("\nDivision = %d",num1/num2);
        printf("\nRemainder = %d",num1%num2);

    }