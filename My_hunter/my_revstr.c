/*
** EPITECH PROJECT, 2022
** my_revstr.c
** File description:
** task03
*/

#include <unistd.h>
#include <stdarg.h>
#include "ah.h"

int my_revstr(char *str)
{
    int x;
    x = my_strlen(str) - 1;
    while (x >= 0) {
        my_putchar(str[x]);
        x--;
    }
    return 0;
}
