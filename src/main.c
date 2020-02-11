/*
** EPITECH PROJECT, 2023
** my_sokoban
** File description:
** A warehouse keeper keeper gamer
*/

#include "../include/my.h"

char *open_map(char const *file)
{
    struct stat map;
    int fd = 0;
    char *buffer = NULL;

    fd = open(file, O_RDONLY);
    if (fd < 0)
        return (NULL);
    if (stat(file, &map) == -1)
        return (NULL);
    buffer = malloc(sizeof(char) * map.st_size + 1);
    if (!buffer)
        return (NULL);
    read(fd, buffer, map.st_size);
    close(fd);
    buffer[map.st_size] = '\0';
    return (buffer);
}

int main(int ac, char **av)
{
    player_t *play = malloc(sizeof(player_t));
    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        print_h();
        return (84);
    }
    char *map = open_map(av[1]);
    if (map == NULL)
        return (84);
    char **buff = stars(map);
    window(buff, map, &play);
}