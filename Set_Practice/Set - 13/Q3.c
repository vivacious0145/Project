/* Program to evaluate the expression 1!-2! +3!-4! +5! -…….up to N terms, the value of N should be accepted from user */
 
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,fact,ctr,ctr1,temp,sum = 0;
    printf("Enter number of terms : ?\b");
    scanf("%d",&n);                               

    for(ctr = 1; ctr <= n; ctr++)
    {   
        fact = 1;
        temp = ctr;
        for(ctr1 = 1; ctr1 <= ctr; ctr1++)
        {
            fact *= temp;   
            temp--;
        }
        if(ctr % 2) {
            sum += fact;         
        }
        else
            sum -= fact; 
    }
    printf("\nEvaluated Value : %d",sum);
}