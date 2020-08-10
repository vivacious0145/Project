#include<stdio.h>
void main() {
    int empno;
    float salary,itax;
    printf("Enter employee no :: ?\b");
    scanf("%d",&empno);
    printf("Enter Salary in rupees :: ?\b");
    scanf("%f",&salary);
    printf("Enter Income tax in rupees :: ?\b");
    scanf("%f",&itax);
    printf("Employee No :: %d",empno);
    printf("\nSalary in rupees :: %.2f",salary);
    printf("\nIncome tax in rupees :: %.2f",itax);
}