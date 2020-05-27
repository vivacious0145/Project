/*************************************************************************************************************************
 *************************************************************************************************************************
Accept any seven digits number from user, calculate the sum of the 
second digit, fourth digit, and the sixth digit, also display the result 
**************************************************************************************************************************
**************************************************************************************************************************/
#include<stdio.h>
    void main()
    {
        int digi,sec,fou,six;
            printf("Enter any five digits : ?\b");
            scanf("%7d",&digi);             //1234567
                sec =  digi/100000;              //12
                sec %= 10;                       //2
                fou = digi/1000;                 //1234
                fou %= 10;                  //4
                six = digi%100;             //67
                six /= 10;                  //6
             
            printf("Sum of second,fourth and sixth digits : %d",sec+fou+six);
    }