/*
** EPITECH PROJECT, 2023
** my_sokoban
** File description:
** A warehouse keeper keeper gamer
*/

#include "../include/my.h"

int line(char *buffer)
{
    int nbline = 0;
    int i = 0;

    for (i = 0; buffer[i] != 0; i++) {
        if (buffer[i] == '\n')
            nbline += 1;
    }
    return (nbline);
}

char **stars(char *str)
{
    char **buffer;
    int nb_line = line(str);
    int count = 0;

    buffer = malloc(sizeof(char *) * (nb_line + 1));
    for (int i = 0, w = 0; i < nb_line; i++) {
        for (count = 0; str[w] != '\n' && str[w] != '\0'; count++, w++);
        buffer[i] = malloc(sizeof(char) * (count + 1));
        w++;
    }
    for (int y = 0, x = 0, i = 0; y < nb_line; y++, i++) {
        for (x = 0; str[i] != '\n'; x++, i++)
            buffer[y][x] = str[i];
        buffer[y][x] = '\n';
    }
    buffer[nb_line] = NULL;
    return (buffer);
}