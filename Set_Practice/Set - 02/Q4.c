#include<stdio.h>
void main() {
    int rr,c,cpp,java,vb;
    printf("Enter Registration No :: ?\b");
    scanf("%d",&rr);
    printf("Enter Marks obtained in C,C++,Java, and VB");
    scanf("%d%d%d%d",&c,&cpp,&java,&vb);
    printf("\n\n\n\n");
    printf("\t\t\t\tStudent Mark Detail\n");
    printf("==================================================================================");
    printf("\nRegistration No           ::\t%d",rr);
    printf("\nC                         ::\t%d",c);
    printf("\nC++                       ::\t%d",cpp);
    printf("\nJAVA                      ::\t%d",java);
    printf("\nVB                        ::\t%d",vb);
}