#include<stdio.h>
#include<conio.h>
void main() 
{
    int N,ctr,fctr,exp,temp,dctr,digits,pctr,pwr,sum,final;
    printf("Enter Value of N : ?\b");
    scanf("%d",&N);                         //5

    for(ctr = 1,fctr = 1; fctr <= N; ctr++) {       //

        for(exp = 0, temp = ctr; temp > 0; temp /= 10, exp++);       //Exponent Counter
        printf("\n%d",exp);                                             //1

        for(dctr = 1,temp = ctr,pwr = 1; dctr <= ctr; temp /= 10, dctr++) {     //Digit founder
                digits = temp%10;
                for(pctr = 1,sum = 0; pctr <= exp; pctr++) {
                    pwr *= digits;
                }
                sum += pwr;
                final += sum;
        }
        if(ctr == final) {
            printf("\n%d",ctr);
            fctr++;
        }
    }
}