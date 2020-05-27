/****************************************************************************************
*****************************************************************************************
		Program to find out Simple Interest until user wish !
*****************************************************************************************
*****************************************************************************************/

#include<stdio.h>
#include<conio.h>
void main()
{   
    int time;
    float sim,rate,pri;
    int x = 'y';
   
    clrscr();
    while (x == 'y' || x == 'Y')
    {
        printf("\nEnter the principal amount : ?\b");
        scanf("%f", &pri);
        
        printf("Enter rate of interest : ?\b");
        scanf("%f", &rate);
        
        printf("Enter time period {in year} : ?\b");
        scanf("%d", &time);
        
        sim =  (pri * rate * time) / 100;
        
        printf("\nSimple Intrest = %.2f", sim); 
        printf("\nWould you like to continue Y/N : ?\b");

        START1 :
        x = getche();
        if(x == 'n' || x == 'N' )
        {
            exit(1);
        }
        else if(x != 'y' && x != 'Y') 
             {
                printf("\nInvalid Key");
                printf("\nEnter Valid Key :: Y/N");
                sleep(2);
                printf("\nWould you like to continue :: ?\b");
                goto START1;
             }
    }
}
