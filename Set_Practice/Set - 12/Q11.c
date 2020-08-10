/* Program to display the squares of the numbers from 1 to 20 */

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,sqr;
    for(i = 1; i <= 20; i++)
    {
        sqr = i*i;
        printf("\n Square of %d = %d",i,sqr);
    }
}