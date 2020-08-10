/* Program to display “LOGIC” 5 times using goto statement.*/

#include<stdio.h>
#include<conio.h>
void main()
{   
    int ctr = 1;
    START:
    printf("\nLOGIC");
    ctr++;
    if(ctr <= 5)
        goto START;
    
}
