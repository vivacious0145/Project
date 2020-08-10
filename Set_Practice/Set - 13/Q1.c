/* Program to display the Fibonacci series of n terms, the value of n should be accepted from user...*/
//Fibonacci Series : 0 1 1 2 3 5 8

#include<stdio.h>
#include<conio.h>
void main()
{
    int num1 = 0, num2 = 1, num3, i = 3, term;
    printf("Enter Number of term :: ?\b");
    scanf("%d",&term);
    printf("Fibonacci series :: ");
    
    if(term == 1)
        printf("%d,",num1);
    else if(term >= 1)    
    {    
        printf("%d,",num1);
        printf("%d,",num2);
    }
    
   while (i<=term)
   {
        num3 = num1+num2;
        printf("%d,",num3);     
        num1 = num2;
        num2 = num3;
        i++;
    }
}