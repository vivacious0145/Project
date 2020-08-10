/* Program to accept any number from user, check and display the count of digits in the given number */

#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter any Value :: ?\b");
    scanf("%d",&num);          
    if(num < 9)
        printf("1 digit");
    else if(num > 9 && num < 99)
            printf("2 digits");
    else if(num > 99 && num < 999)
            printf("3 digits");
    else if(num > 999 && num < 9999)
            printf("4 digits");
    else if(num > 9999 && num < 99999)
            printf("5 digits");
    else if(num > 99999 && num < 999999)
            printf("6 digits");
    else if(num > 999999 && num < 9999999)
            printf("7 digits");    
}