/* Program to find out fibonacci series of given term */

#include<stdio.h>
#include<conio.h>
void main()
{
    int num1 = 0, num2 = 1, num3, i = 3, term;
    clrscr();
    printf("Enter Number of term :: ?\b");
    scanf("%d",&term);
    printf("Fibonacci series :: ");
    
    if(term == 1)
        printf("%d,",num1);
    else if(term >= 1)    
    {    
        printf("%d,",num1);
        printf("%d,",num2);
    }
    
   while (i<=term)
   {
        num3 = num1+num2;
        printf("%d,",num3);     
        num1 = num2;
        num2 = num3;
        i++;
    }
    getch();
}