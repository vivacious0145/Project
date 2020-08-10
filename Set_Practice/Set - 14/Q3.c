#include<stdio.h>
#include<conio.h>
void main()
{   
    int ch,i;
    printf("Press any alphabet :: ?\b");
    do
    {
        ch = getch();
        if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
        {
            printf("\n%c",ch);
            printf("\nASCCI Value : %d",ch);
            for ( i = 1; i <= 10; i++)
            {
                printf("\n%d * %d = %d",ch,i,ch*i);
            }
        }
        printf("\n\n\nPress Enter Key to Exit");
    } while (ch != 13);   
}
