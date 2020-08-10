#include<stdio.h>
    void main(){
        int prin,time;
        float rate,si;
        printf("Enter the Principal Amount : ?\b");
        scanf("%d",&prin);
        printf("Enter time in year : ?\b");
        scanf("%d",&time);
        printf("Enter rate to Interest : ?\b");
        scanf("%f",&rate);
            si = (prin*time*rate)/100;
        printf("Simple Interest : %.2f",si);   
    }