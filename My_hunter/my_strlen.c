/*
** EPITECH PROJECT, 2022
** strlen
** File description:
** strlen
*/

#include <unistd.h>
#include <stdarg.h>
#include "ah.h"

int my_strlen(char const *str)
{
    int l = 0;
    while (str[l] != '\0') {
        l++;
    }
    return l;
}
