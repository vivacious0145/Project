/* Program to accept any three digits number, calculate the reverse value */

#include<stdio.h>
    void main()
    {
        int digi,fir,mid,las;
        printf("Enter any three digits : ?\b");
        scanf("%3d",&digi);
            fir = digi/100;
            mid = digi/10;
            mid %= 10;
            las = digi%10;
        printf("Reverse Value : %d%d%d",las,mid,fir);
    }