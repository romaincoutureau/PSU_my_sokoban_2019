/*
** EPITECH PROJECT, 2019
** my_sokoban
** File description:
** A warehouse keeper keeper gamer
*/

#include "../include/my.h"

void movement_up(player_t *play)
{
    if (play->buf[play->y - 1][play->x] != '#') {
        if (play->buf[play->y - 1][play->x] == 'X'
            && play->buf[play->y - 2][play->x] != '#') {
            play->buf[play->y][play->x] = ' ';
            play->buf[play->y - 2][play->x] = 'X';
            play->buf[play->y - 1][play->x] = 'P';
        } else if (play->buf[play->y - 1][play->x] == ' '
            && play->buf[play->y - 1][play->x] != '#'){
            play->buf[play->y][play->x] = ' ';
            play->buf[play->y - 1][play->x] = 'P';
        }
    }
}

void movement_down(player_t *play)
{
    if (play->buf[play->y + 1][play->x] != '#') {
        if (play->buf[play->y + 1][play->x] == 'X'
            && play->buf[play->y + 2][play->x] != '#') {
            play->buf[play->y][play->x] = ' ';
            play->buf[play->y + 2][play->x] = 'X';
            play->buf[play->y + 1][play->x] = 'P';
        } else if (play->buf[play->y + 1][play->x] == ' '
            && play->buf[play->y + 1][play->x] != '#'){
            play->buf[play->y][play->x] = ' ';
            play->buf[play->y + 1][play->x] = 'P';
        }
    }
}

void movement_left(player_t *play)
{
    if (play->buf[play->y][play->x - 1] != '#') {
        if (play->buf[play->y][play->x - 1] == 'X'
            && play->buf[play->y][play->x - 2] != '#') {
            play->buf[play->y][play->x] = ' ';
            play->buf[play->y][play->x - 2] = 'X';
            play->buf[play->y][play->x - 1] = 'P';
        } else if (play->buf[play->y][play->x - 1] == ' '
            && play->buf[play->y][play->x - 1] != '#'){
            play->buf[play->y][play->x] = ' ';
            play->buf[play->y][play->x - 1] = 'P';
        }
    }
}

void movement_right(player_t *play)
{
    if (play->buf[play->y][play->x + 1] != '#') {
        if (play->buf[play->y][play->x + 1] == 'X'
            && play->buf[play->y][play->x + 2] != '#') {
            play->buf[play->y][play->x] = ' ';
            play->buf[play->y][play->x + 2] = 'X';
            play->buf[play->y][play->x + 1] = 'P';
        } else if (play->buf[play->y][play->x + 1] == ' '
            && play->buf[play->y][play->x + 1] != '#'){
            play->buf[play->y][play->x] = ' ';
            play->buf[play->y][play->x + 1] = 'P';
        }
    }
}