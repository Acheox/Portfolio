/*
** EPITECH PROJECT, 2022
** octal
** File description:
** my_printf
*/

#include <unistd.h>
#include <stdarg.h>
#include "ah.h"

int revoctal(char *stroct)
{
    int x;
    x = my_strlen(stroct) - 1;
    while (x >= 0) {
        my_putchar(stroct[x]);
        x--;
    }
    return 0;
}

int octal(int i, const char *format, va_list list)
{
    if (format[i] == 'o') {
        unsigned int o = va_arg(list, unsigned int);
        char stroct[100];
        int a = 0;
        while (o >= 1) {
            stroct[a] = (o % 8) + '0';
            o = o / 8;
            a++;
        }
        revoctal(stroct);
    }
}
