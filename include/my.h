/*
** EPITECH PROJECT, 2019
** my_sokoban
** File description:
** A warehouse keeper keeper gamer
*/

#ifndef SOKOBAN
#define SOKOBAN

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <ncurses.h>
#include <sys/types.h>
#include <sys/stat.h>

typedef struct player_s {
    int nb_line;
    char **buf;
    int max_x;
    int x;
    int max_y;
    int y;
} player_t;

void search_p(player_t *play);
int main(int ac, char **av);
char *open_map(char const *file);
int	my_strcmp(char *s1, char *s2);
void print_h(void);
int my_putstr(char const *str);
void movement_up(player_t *play);
void movement_down(player_t *play);
int player(player_t *play);
void movement_right(player_t *play);
void movement_left(player_t *play);
void reset_map(player_t *play);
int my_strlen(char const *str);
void my_putchar(char c);
int line(char *buffer);
int my_getnbr(char const *str);
void window(char **av, char *map, player_t *play);
char **stars(char *str);

#endif

