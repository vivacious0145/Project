#include<stdio.h>
void main() {
    int pro_no,quantity;
    float unit_pr;
    printf("Enter Product No :: ?\b");
    scanf("%d",&pro_no);
    printf("Enter Unit price in rupees :: ?\b");
    scanf("%f",&unit_pr);
    printf("Enter Quantity taken in pieces :: ?\b");
    scanf("%d",&quantity);

    printf("Product No :: %d",pro_no);
    printf("\nUnit price in rupees :: %.2f",unit_pr);
    printf("\nQuantity taken in pieces :: %d",quantity); 
}