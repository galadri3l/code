#include<ncurses.h>
int main()
{
	initscr();
	printw("Hello World! ncurses style");
	refresh();
	getch();
	endwin();
	return 0;
}
