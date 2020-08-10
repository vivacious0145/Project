/* Program to display the cubes of the numbers from 1 to 20 */

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,sqr;
    for(i = 1; i <= 20; i++)
    {
        sqr = i*i*i;
        printf("\n Cube of %d = %d",i,sqr);
    }
}