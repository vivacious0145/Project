/*********************************************************************************************
**********************************************************************************************
Program to accept the marks obtained by a student in the computer languages C, C++, and Java. 
Also display the result of the student as per the criteria given below: - 
        
        Maximum Marks           60 in each paper
        Minimum Pass Marks      30 in each paper
        PASS                    if aggregate >= 50 other wise FAIL
        GOOD                    if aggregate between 51 and 59
        VERY GOOD               if aggregate between 60 and 70
        EXCELLENT               if aggregate exceeds from 70 

***********************************************************************************************
***********************************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
    int c,cpp,java;
    float total;
    start :
    printf("\nEnter marks obtained in C : ?\b");
    scanf("%d",&c);
    if(c > 60) 
    {
        printf("\nInvalid Marks\nEnter valid Marks < 60 ");
        goto start;
    }
    else
    {
        start1 : 
        printf("\nEnter marks obtained in C++ : ?\b");
        scanf("%d",&cpp);
        if(cpp > 60) 
        {
            printf("\nInvalid Marks\nEnter valid Marks < 60 ");
            goto start1;
        }
        else
        {
            start2 :
            printf("\nEnter marks obtained in Java : ?\b");
            scanf("%d",&java);
            if(java > 60)
            { 
            printf("\nInvalid Marks\nEnter valid Marks < 60 ");
            goto start2;
            }
        }
    }
    if(c >= 30 && cpp >= 30 && java >= 30)
    {
        total = (c+cpp+java)*100/180.00;
        printf("Obtained aggregate : %.2f",total);
        printf("\nResult : ");
        if(total == 50)
            printf("PASS");
        else if(total > 50 && total < 60)
            printf("GOOD");
        else if(total > 59 && total < 71)
            printf("VERY GOOD");
        else if(total >= 70)
            printf("EXCELLENT");
    }
    else
        printf("Fail");
}