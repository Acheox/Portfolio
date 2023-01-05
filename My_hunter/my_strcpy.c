/*
** EPITECH PROJECT, 2022
** strcpy
** File description:
** strcpy
*/

#include <unistd.h>
#include <stdarg.h>
#include "ah.h"

char *my_strcpy ( char *dest , char const *src )
{
    int n;
    n = 0;
    while (src[n] != '\0') {
        dest[n] = src[n];
        n++;
    }
    dest[n] = '\0';
    return (dest);
}
