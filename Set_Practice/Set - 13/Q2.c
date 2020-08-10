/* Program to evaluate the expression x-x^2+x^3-x^4+…….up to N terms, the value of x and N should be accepted from user */

#include<stdio.h>
#include<conio.h>
void main()
{
    int x,n,ctr,ctr2,pwr,sum = 0;
    printf("Enter value of x : ?\b");
    scanf("%d",&x);                                            //2
    printf("Enter number of terms : ?\b");
    scanf("%d",&n);                                            //4
    
    //2^1-2^2+2^3-2^4 => 2-4+8-16 => -10
    
    for(ctr = 1; ctr <= n; ctr++)      // 1 <= 4                       
    {
        pwr = 1;
        for(ctr2 = 1; ctr2 <= ctr; ctr2++)
        {
           pwr *= x;    //1*2
        }
        
        if(ctr % 2) {
            sum += pwr;         //
        }
        else
            sum -= pwr;         //
    }
    printf("Evaluated Value : %d",sum);
    
}