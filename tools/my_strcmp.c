/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** pushswap
*/

#include "../include/my.h"

int	my_strcmp(char *s1, char *s2)
{
    int	d = 0;

    while ((s1[d] == s2[d]) && (s1[d] != '\0') && (s2[d] != '\0'))
    {
        d++;
    }
    return (s1[d] - s2[d]);
}