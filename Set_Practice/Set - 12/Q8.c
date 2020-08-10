#include<stdio.h>
#include<conio.h>
void main()
{
    int key,key1,key2,key3,key4,key5,num;
    clrscr();
    printf("Press Home Key To Start Watch\n");
    key = getch();
    if(key == 0) {
        key1 = getch();
	if(key1 == 71) {

	    RESET:
	    clrscr();
	    printf("Press End Key To Stop Watch\n");
	    printf("Press Delete Key To Reset Watch\n");
	    printf("Press Alt+F4 To Exit the Program\n");
	    for(num = 0; num >= 0; num++) {
		gotoxy(1,4);
		printf("Time : %d",num);
		if(kbhit()) {
			key2 = getch();
			if(key2 == 0) {
				key3 = getch();
				if(key3 == 79) {
					goto END;
				}
				else if(key3 == 83) {
						goto RESET;
					}
				else if(key3 == 107) {
					exit();
				}

			}

		}
		sleep(1);
		gotoxy(1,4);
	    }
	}
    }
    END:
  //  printf("\n\n\nPress Alt+F4 To Exit");
    key4 = getch();
    if(key4 == 0) {
	key5 = getch();

	if(key5 == 107) {
		exit();
	}
	else if(key5 == 83) {
		goto RESET;
	}
	else {
		printf("\nInvalid Key\nPress Valid Key");
		goto END;
	}
    }
    else {
	printf("\nInvalid Key\nPress Valid Key");
	goto END;

    }
}
