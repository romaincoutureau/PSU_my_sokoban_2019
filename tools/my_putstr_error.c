/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** my_putstr_error
*/

#include "../include/my.h"
#include <stdio.h>
#include <unistd.h>

void my_putchar_error(char c)
{
    write(2, &c, 1);
}

int my_putstr_error(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        my_putchar_error(str[i]);
        i++;
    }
    return (0);
}
