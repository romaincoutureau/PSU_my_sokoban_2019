/*
** EPITECH PROJECT, 2019
** my_sokoban
** File description:
** A warehouse keeper keeper gamer
*/

#include "../include/my.h"

void window(char **av, char *map, player_t *play)
{
    play->nb_line = line(map);
    play->buf = av;

    initscr();
    clear();
    noecho();
    curs_set(FALSE);
    keypad(stdscr, TRUE);
    while (1) {
        search_p(play);
        for (int i = 0; play->buf[i] != NULL; i++) {
            mvprintw(i + (LINES / 3.5), (COLS / 2.5), "%s", play->buf[i]);
            refresh();
        }
    player(play);
    }
    if (getch() != 32); {
        reset_map(play);
    }
    endwin();
}

void reset_map(player_t *play)
{

}