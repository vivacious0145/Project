#include<stdio.h>
#include<conio.h>
void main() {
	int ch,ch1,a=1,b=1;
	textbackground(7);
	textcolor(0);
	clrscr();
	do {
		ch = getch();
		if(ch == 9) {        //Tab Key
			a += 8;
		} else if(ch == 32) {    //Space Key
			a++;
		} else if(ch == 8) {        //Backspace Key
			a--;
		} else if(ch == 0) {
			ch1 = getch();
			if(ch1 == 75) {       //left Arrow
				a--;
			} else if(ch1 == 72) {       //UP Arrow
				b--;
			} else if(ch1 == 77) {        //Right arrow
				a++;
			} else if(ch1 == 80) {           //Down Arrow
				b++;
			}
		} else if(ch == 49) {     //1
			exit(1);

		}
		if(a > 80) {
			a = 80;
		} else if(a < 1) {
			a = 1;
		}
		if(b > 25) {
			b = 25;
		} else if(b < 1) {
			b = 1;
		}
		clrscr();
		gotoxy(a,b);
		printf("I\b");
	} while(1);
}