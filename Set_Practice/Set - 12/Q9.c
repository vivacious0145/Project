/*Program to display the table of 20 on the screen  */

#include<stdio.h>
#include<conio.h>
void main()
{
    int num = 2,count = 1;
    for(num; num <= 20; num+=2,count++)
    {
        printf("\n2 * %d = %d",count,num);
    }
}