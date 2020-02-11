/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** pushswap
*/

#include "../include/my.h"

int my_getnbr(char const *str)
{
    int result = 0;
    int is_neg = 1;
    int x = 0;

    while ('0' > str[x] || str[x] > '9') {
        if (str[0] == '-') {
            is_neg = is_neg * -1;
        } else if (str[x] != '+') {
            return (0);
        }
        x++;
    }
    for (; str[x] != '\0' && '0' >= str[x] && str[x] <= '9' ; x++)
        result = result * 10 + (str[x] - '0');
    return (result * is_neg);
}