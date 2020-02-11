/*
** EPITECH PROJECT, 2019
** my_sokoban
** File description:
** A warehouse keeper keeper gamer
*/

#include "../include/my.h"

void search_p(player_t *play)
{
    for (int i = 0; i < play->nb_line; i++) {
        for (int l = 0; play->buf[i][l] != '\n'
        && play->buf[i][l] != '\0'; l++) {
            if (play->buf[i][l] == 'P') {
                play->y = i;
                play->x = l;
            }
        }
    }
}

int player(player_t *play)
{
    int key = getch();

    switch(key) {
        case KEY_UP:
        movement_up(play);
        break;
        case KEY_DOWN:
        movement_down(play);
        break;
        case KEY_RIGHT:
        movement_right(play);
        break;
        case KEY_LEFT:
        movement_left(play);
        break;
    }
}