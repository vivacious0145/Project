/*************************************************************************************************
**************************************************************************************************
Program to accept any number from user as a month number, also check and display the corresponding 
month name if the number 1 is equivalent to the month January....!! 
**************************************************************************************************
**************************************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
    int month;
    printf("Enter any Number :: ?\b");
    scanf("%d",&month);  
    month %= 12;     
    if(month == 1)
        printf("January");
    else if(month == 2)
            printf("February");
    else if(month == 3)
            printf("March");
    else if(month == 4)
            printf("'April");
    else if(month == 5)
            printf("May");
    else if(month == 6)
            printf("June");
    else if (month == 7)
            printf("July");
    else if (month == 8)
            printf("August");
    else if (month == 9)
            printf("September");
    else if (month == 10)
            printf("October");
    else if (month == 11)
            printf("November");
    else if (month == 12)
            printf("December");

}
