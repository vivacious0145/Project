#include<stdio.h>
    void main()
    {   
        int rad,are,cicum;
        printf("Enter radius of circle : ?\b");
        scanf("%d",&rad);
        printf("Diameter of the  circle : %d",2*rad);
        printf("\nArea of the Circle : %.2f",(22/7.0)*rad*rad);
        printf("\nCircumference of the circle : %.2f",2*(22/7.0)*rad);
    }