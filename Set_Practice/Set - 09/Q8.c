/***********************************************************************************
************************************************************************************
Program that prints the title of a software company on pressing the 
key combination as per the chart given below:-

    CTRL + Left     Arrow Oracle Corporation
    CTRL + Right    Arrow Microsoft Corporation
    CTRL + Up       Arrow ANHR EduTech Private Limited
    CTRL + Down     Arrow Tata Consultancy Services 

************************************************************************************
************************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
    int ch,ch2;
    start :
    printf("\nEnter the CTRL + Any Arrow key combination to print company title : ?\b");
    ch = getch();
    if(ch==0)
    {
        ch2 = getch();
        if(ch2 == 115 || ch2 == 141 || ch2 == 116 || ch2 == 145)
        {
            if(ch == 0 && ch2 == 115)
                printf("Oracle Corporation");
            else if(ch == 0 && ch2 == 141)
                    printf("ANHR EduTech Private Limited");
            else if(ch == 0 && ch2 == 116)
                    printf("Microsoft Corporation");
            else if(ch == 0 && ch2 == 145)
                    printf("Tata Consultancy Services");
        }
        else
            goto start1;
    }
    else
    {   
        start1 :
        printf("\nInvalid key\nEnter Valid key");
        goto start;
        printf("\n\n");
    }
}