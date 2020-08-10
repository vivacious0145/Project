/* Program to display the word “LOGIC” 5 times using recursive main (). */

#include<stdio.h>
#include<conio.h>
void main()
{   
    static int ctr = 1;
    printf("\nLOGIC");
    ctr++;
    if(ctr <= 5)
        main();
}