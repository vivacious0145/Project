#include<stdio.h>
#include<conio.h>
void main() {
	int ch,ch1,x=1,y=1;
	textbackground(7);
	textcolor(0);
	clrscr();
	do {
		clrscr();
		if(x > 74) {
			x = 74;
		} else if(x < 1) {
			x = 1;
		}
		if(y > 25) {
			y = 25;
		} else if(y < 1) {
			y = 1;
		}
		gotoxy(x,y);
		textcolor(0);
		cprintf("Logic");
		textcolor(7);
		cprintf(" \b");
		ch = getch();

		if(ch == 9) {        //Tab Key
			x += 8;
		} else if(ch == 32) {    //Space Key
			x++;
		} else if(ch == 8) {        //Backspace Key
			x--;
		} else if(ch == 0) {
			ch1 = getch();
			if(ch1 == 75) {       	    	//Left Arrow
				x--;
			} else if(ch1 == 72) {       	//Up Arrow
				y--;
			} else if(ch1 == 77) {        	//Right Arrow
				x++;
			} else if(ch1 == 80) {          //Down Arrow
				y++;
			}
		} else if(ch == 49) {     //1
			exit(1);
		}
	} while(1);
}