/*************************************************************************************************************************
 *************************************************************************************************************************
Program to accept any seven digits number from user, calculate the sum, prod, average value of the digits...
**************************************************************************************************************************
**************************************************************************************************************************/
#include<stdio.h>
    void main()
    {
        int digi,fir,sec,thi,fou,fift,six,sev,sum;
            printf("Enter any five digits : ?\b");
            scanf("%7d",&digi);             //1234567
                fir = digi/1000000;         //1
                sec =  digi/100000;         //12
                sec %= 10;                  //2
                thi = digi/10000;           //123
                thi %= 10;                  //3
                fou = digi/1000;            //1234
                fou %= 10;                  //4
                fift = digi/100;            //12345
                fift %= 10;                 //5
                six = digi%100;             //67
                six /= 10;                  //6
                sev = digi%10;              //7
                sum = fir+sec+thi+fou+fift+six+sev;     //28
            printf("Sum of all digits : %d",sum);
            printf("\nProduct of all digits : %d",fir*sec*thi*fou*fift*six*sev);      //5040
            printf("\nAverage value of digits : %d",sum/7);   //4
    }