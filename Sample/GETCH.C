void main()
{
	char x;
	clrscr();
	textcolor(7);
	cprintf("Enter any character :: ?\b");
       //	x = getch();
       //	x = getche();
	x = getchar();
	cprintf("\n\rASCCI Value :: %d",x);

	sleep(3);
}