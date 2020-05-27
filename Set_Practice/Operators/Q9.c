/*************************************************************************************************************************
 *************************************************************************************************************************
Accept any seven digits number from user, calculate the sum of the 
first digit, third digit, and the fifth digit, also display the result 
**************************************************************************************************************************
**************************************************************************************************************************/
#include<stdio.h>
    void main()
    {
        int digi,fir,thi,fift;
            printf("Enter any five digits : ?\b");
            scanf("%7d",&digi);             //1234567
                fir = digi/1000000;         //1
                thi = digi/10000;           //123
                thi %= 10;                  //3
                fift = digi/100;            //12345
                fift %= 10;                 //5
            printf("Sum of first,third and fifth digits : %d",fir+thi+fift);
    }