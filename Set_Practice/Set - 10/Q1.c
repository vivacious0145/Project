/****************************************************************************
***************************************************************************** 
Program to accept the basic salary of an employee, also calculate and display 
the pay detail of the employee as per the criteria given below: -

Basic Salary                Ranges from 10000 and up to 50000
House Rent Allowance        8% if salary > 25000 otherwise 6%
Dearness Allowance          6% if salary > 25000 other wise 4%
Medical Allowance           4% if salary > 25000 other wise 3%
Travel Allowance            3% if salary > 25000 other wise 2%
Income Tax Deduction        5% if total > 55000 other wise 2.5% 

*****************************************************************************
*****************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
    int basic;
    float hra,da,ma,ta,itd,pay;
    printf("Enter basic salary : ?\b");
    scanf("%d",&basic);
    if(basic < 10000 || basic > 50000)
        printf("\nInvalid Basic Salary");
    else if(basic > 25000 )
        {
            hra = basic*0.08;       //House Rent Allowance Calculation 
            da = basic*0.06;        //Dearness Allowance Calculation
            ma = basic*0.04;        //Medical Allowance Calculation
            ta = basic*0.03;        //Travel Allowance Calculation
        }
    else
        {
            hra = basic*0.06;           //House Rent Allowance Calculation
            da = basic*0.04;           //Dearness Allowance Calculation
            ma = basic*0.03;            //Medical Allowance Calculation
            ta = basic*0.02;            //Travel Allowance Calculation
        }
    pay = basic+hra+da+ma+ta;          
    if(pay > 55000)
        itd = pay*0.05;             //Income Tax Deduction Calculation
    else
        itd = pay*0.025;            //Income Tax Deduction Calculation
    printf("\nBasic salary of an employee :: %d",basic);
    printf("\nHouse Rent Allowance : %.2f",hra);
    printf("\nDearness Allowance : %.2f",da);
    printf("\nMedical Allowance : %.2f",ma);
    printf("\nTravel Allowance : %.2f",ta);
    printf("\nTotal Pay : %.2f",pay);
    printf("\nIncome Tax Deduction : %.2f",itd);
    printf("\nActual Pay : %.2f",pay-itd);
}
