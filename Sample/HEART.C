/*Program to print love triangle */
void main()
{
	int lin = 10, linc = 1, msg = 1, msgc;
	clrscr();
	while(linc <= lin)
	{
		msgc = 1;
		while(msgc <= msg)
		{
			textcolor(4);
			cprintf("%c",3);
			msgc++;
		}
		msg++;
		linc++;
		printf("\n");
	}
	textcolor(0);
	cprintf(" \b");
	delay(3000);
}