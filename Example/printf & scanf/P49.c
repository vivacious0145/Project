#include<stdio.h> 
#include<conio.h>
    void main()
    { 
        int num1, num2; 
        printf("Enter Two Numbers :: ?\b");
        scanf("%d%d",&num1,&num2);
        printf("\n\nnum1 = %d\tnum2 = %d", num1,num2); 
        while(!kbhit());
    }