/*
** RUDREAIS, 05/27/18
** roguelike
** File description:
** main
*/

#include <ncurses.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "board.h"
#include "windows.h"

void game_loop(void)
{
	int c;

	while (c != 'q') {
		c = getch();
	}
}

int main(void)
{
	init_curse();
	for (int i = 0; i < 1; i++) {
		game_loop();
	}
	endwin();
}