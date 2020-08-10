/* Program to evaluate the expression 1÷x1-2÷x2+3÷x3-……up to N terms, the value of x and N should be accepted from user */

#include<stdio.h>
#include<conio.h>
void main()
{
    int x,n,ctr,ctr1,multi = 1;
    float div,sum = 0;
    printf("Enter Value of x : ?\b");
    scanf("%d",&x);                             //2
    printf("Enter number of terms : ?\b");
    scanf("%d",&n);                                    //3

    for(ctr = 1,multi = 1; ctr <= n; ctr++)
    {   

        multi = x * ctr;   
        printf("\nProduct = %d",multi);     
        div = (float)ctr/multi;        
        printf("\nDivision = %.2f",div);

        if(ctr % 2) {
            sum +=  div;          //Odd  
            printf("\nodd");   
        }
        else
        {
            sum -= div;            //Even
            printf("\nEven");
        }
        printf("\n\tSum = %d",sum);
        

    }

}