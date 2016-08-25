#include<stdio.h>
#include<ncurses.h>
#include<string.h>

int main()
{
	char mesg[] = "Long live the ncurses!!!";
	int row,col;

	initscr();
	getmaxyx(stdscr,row,col);
	mvprintw(row/2,(col-strlen(mesg))/2,"%s",mesg);
	mvprintw(row-2,0,"This screen has %d rows and %d col",row,col);
	printw("Try resizing this window and run this program again");
	refresh();
	getch();
	getch();
	endwin();
	return 0;
}
