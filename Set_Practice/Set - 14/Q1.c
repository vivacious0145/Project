#include<stdio.h>
#include<conio.h>
void main() 
{
    int digit,num = 0;
    printf("Enter any number : ?\b");
    do
    {
        digit = getch();
        if(digit == 13) {
            break;
        }
        else if(digit >= 48 && digit <= 57)
        {
            printf("%c",digit);
            num = (num*10) + digit-48;    
        }
    } while (1);
    printf("\nNumber = %d",num);
}