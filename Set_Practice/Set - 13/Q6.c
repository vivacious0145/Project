#include<stdio.h>
#include<conio.h>
void main()
{
    int N,sum = 0,ctr,pctr,temp,div;

    printf("Enter Value of N :: ?\b");
    scanf("%d",&N);

   for(ctr = 1,pctr = 1; pctr <= N; ctr++) {        //Prime counter     1,2,3,4,5,6,7

        for(temp = ctr,div = 2; div <= ctr/2; div++) {          //Check Prime
            if(ctr%div == 0) {
                break;
            }
        }
        if(temp != 1 && div > temp/2) {
            printf(" %d",temp);
            sum += temp;
            pctr++;
        }
    }
    printf("\n\nSum = %d",sum);
}