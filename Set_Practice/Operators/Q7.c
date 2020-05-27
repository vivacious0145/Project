/*************************************************************************************************************************
 *************************************************************************************************************************
Accept any five digits number from user, calculate the sum
of the first digit, middle digit, and the last digit, also display the result 
**************************************************************************************************************************
**************************************************************************************************************************/
#include<stdio.h>
    void main()
    {
        int digi,fir,sec,thi,fou,las;
            printf("Enter any five digits : ?\b");
            scanf("%5d",&digi);         //12345
                fir = digi/10000;       //1
                sec = digi/1000;        //12
                sec %= 10;              //2
                thi = digi/100;         //123
                thi %= 10;              //3
                fou = digi/10;          //1234
                fou %= 10;              //4
                las = digi%10;          //5
            printf("Sum of first,middle and last digits : %d",fir+thi+las);
    }