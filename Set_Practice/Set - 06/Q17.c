#include<stdio.h>
    void main()
    {
        int len,wid,peri;
            printf("Enter the length of Rectangle : ?\b");
            scanf("%d",&len);
            printf("Enter the width of Rectangle : ?\b");
            scanf("%d",&wid);
            peri = 2*len + 2*wid;
            printf("Area of Rectangle : %d",len*wid);
            printf("\nPerimeter of Rectangle : %d",peri);
    }