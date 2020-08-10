/************************************************************************************
*************************************************************************************
Program to accept any number from user as a month number, also check and display 
the corresponding season name as per the season chart given below: -
    
    Month Number            Corresponding Season
    
    1, 2, 11, 12  ==>       Winter Season
    3, 4          ==>       Spring Season
    5, 6, 7, 8    ==>       Summer Season
    9, 10         ==>       Rainy Season 

**************************************************************************************                
**************************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    start :
    printf("\nEnter any Number : ?\b");
    scanf("%d",&num);

    if(num < 1 || num > 12)
    {
        printf("Invalid Number\nEnter Valid Number from 1 to 12");
        goto start;
    }
    else if(num == 1 || num == 2 || num == 11 || num == 12)
        printf("Winter Season");
    else if(num == 3 || num == 4)
        printf("Spring Season");
    else if(num == 5 || num == 6 || num == 7 || num == 8)
        printf("Summer Season");
    else if(num == 10 || num == 9)
        printf("Rainy Season");
    
}
