/*
** EPITECH PROJECT, 2022
** hexaprintf
** File description:
** hexa
*/

#include <unistd.h>
#include <stdarg.h>
#include "ah.h"

int minletter(va_list list)
{
    unsigned int x = va_arg(list, unsigned int);
    char str[100];
    int a = 0;
    char s[] = "0123456789abcdef";
    while (x >= 1) {
        str[a] = s[(x % 16)];
        x = x / 16;
        a++;
    }
    my_revstr(str);
}

int majletter(va_list list)
{
    unsigned int X = va_arg(list, unsigned int);
    char str[100];
    int a = 0;
    char s[] = "0123456789ABCDEF";
    while (X >= 1) {
        str[a] = s[(X % 16)];
        X = X / 16;
        a++;
    }
    my_revstr(str);
}

int xletter(int i, const char *format, va_list list)
{
    if (format[i] == 'x') {
        minletter(list);
    } else if (format[i] == 'X') {
        majletter(list);
    }
}
