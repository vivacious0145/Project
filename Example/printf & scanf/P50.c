#include<stdio.h>
#include<conio.h>
    void main()
    {
        int num1,num2;
        printf("Enter Two Numbers :: ?\b");
        printf("%d",scanf("%d %d %d %d",&num1,&num2));
        printf("\n\n %d%d",num1,num2);
        while(!kbhit());
    }