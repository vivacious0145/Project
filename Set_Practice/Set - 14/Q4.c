#include<stdio.h>
#include<conio.h>
void main() 
{
    int digit,sum = 0,rev = 0;
    printf("Enter first number : ?\b");
    do
    {
        digit = getch();
        if(digit >= 48 && digit <= 57)
        {
            printf("%c",digit); 
            sum += digit-48;
        }
    } while (digit != 13);
    printf("\nSum = %d",sum);   
   
    while(sum > 0) {
        rev = (rev*10) + (sum%10);  
        sum /= 10;
    }
    printf("\nReverse Number of the Sum :: %d",rev);
}