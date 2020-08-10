/***************************************************************************************************
****************************************************************************************************

Program to display the word “LOGIC” continuously until the END key is pressed on the keyboard, use 
do while and the each word should be displayed one by one automatically after the delay of 2 Sec...

****************************************************************************************************
****************************************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
    int key,key1;
    do
    {
        printf("LOGIC");
        sleep(2);
        if(kbhit())
        {
            key = getch();
            if(key == 0)
            {
                key1 = getch();
            }   
                if(key1 == 79)
                {   
                    break;
                }
        }
        
    } while (1);
    
}