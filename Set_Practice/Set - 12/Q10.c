/* Program to display the table of a number accepted from user */

#include<stdio.h>
#include<conio.h>
void main()
{
    int count,num;
    printf("Enter any Number : ?\b");
    scanf("%d",&num);
    for(count = 1; count<=10; count++)
    {
        printf("\n%d * %d = %d",num,count,count*num);
    }
}