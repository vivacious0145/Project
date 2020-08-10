#include<stdio.h>
#include<conio.h>
void main()
{
    int num1 = 1,pctr = 0,count1,sum,nhold1 = 0,nhold2 = 0,nhold3 = 0;

    for(num1; num1<=500; num1++)    
    {
        for(count1 = 2,sum = 1; count1 <= num1/2; count1++)  
        {
            if(num1 % count1 == 0)  
            {
                sum += count1;

            }
        }
        if(num1 == sum) {
            printf("%d ",num1); 
            pctr++;
            
            
        }
        if(pctr>3) {
            break;
        }
    }
}
    