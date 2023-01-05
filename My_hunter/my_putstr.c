/*
** EPITECH PROJECT, 2022
** putstr
** File description:
** putstr
*/

#include <unistd.h>
#include <stdarg.h>
#include "ah.h"

int my_putstr(char const *str)
{
    int count = 0;
    while (str[count] != '\0') {
        my_putchar(str[count]);
        count++;
    }
}
