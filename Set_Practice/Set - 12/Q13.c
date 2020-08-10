/* Program to display the sum of first 10 natural numbers */

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,sum = 0;
    for(i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("Sum of first 10 natural numbers : %d",sum);
}