/**********************************************************************************************
***********************************************************************************************
Program to accept any number from user as a day number,also check and display the corresponding 
day name if the number zero is equivalent to the day Sunday using if..... else statement!! 
***********************************************************************************************
***********************************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
    int day;
    printf("Enter any Number :: ?\b");
    scanf("%d",&day);       
    day%=7;
    if(day == 0)
        printf("Sunday");
    else if(day == 1)
            printf("Monday");
    else if(day == 2)
            printf("Tuesday");
    else if(day == 3)
            printf("Wednesday");
    else if(day == 4)
            printf("Thursday");
    else if(day == 5)
            printf("Friday");
    else if(day == 6)
            printf("Saturday");
}