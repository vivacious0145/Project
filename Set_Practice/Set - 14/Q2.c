#include<stdio.h>
#include<conio.h>
void main()
{
    int ch,assci,rnum;
    printf("Enter any alphabet : ?\b");
    do
    {   
        ch = getch();
        if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
        {
            printf("\n%c",ch);
            printf("\n\nASCCI Value : %d",ch);
            assci = ch;
            rnum = 0;
            while(assci>0) {
                rnum = (rnum*10) + (assci%10);
                assci /= 10;
            }
            printf("\nRevers of ASSCI Value : %d\n",rnum);
            printf("\n\n\n\nPress Enter to Exit");
        }
    } while (ch != 13);
    
}