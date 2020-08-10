/*********************************************************************************
********************************************************************************** 
Program to display the digits of a number from left to right one by one each after 
the delay of 500 ms, and the number should be accepted from user....
**********************************************************************************
**********************************************************************************/

#include<stdio.h>
#include<conio.h>
void main()
{
    int num,digit,temp,dcount,div = 1,i = 1;
    printf("\n\nEnter any number : ?\b");
    scanf("%d",&num);                       //5895

   for(dcount = 0, temp = num; temp > 0; temp /= 10 , dcount++);   
  // printf("\nDigits = %d",dcount);                 //Digits = 4
   
   while(i < dcount)
   {
       div *= 10;                                  
       i++;
   }
 //  printf("\nDivisior = %d",div);                 //Divisior = 1000

   for(digit = 0; num > 0; )
    {
        digit = num/div;                // 5895 / 1000 => 5
        printf("\n%d",digit);             //5
        num %= div;                     //5895 % 1000 => 895
        div /= 10;                      // 100
        sleep(1);
    }

   
}