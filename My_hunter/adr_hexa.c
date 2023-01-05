/*
** EPITECH PROJECT, 2022
** adrhexa
** File description:
** hexa
*/

#include <unistd.h>
#include <stdarg.h>
#include "ah.h"

int adr_hexa(va_list list, unsigned int x)
{
    char str[15];
    int a = 0;
    char s[] = "0123456789abcdef";
    while (x >= 1) {
        str[a] = s[(x % 16)];
        x = x / 16;
        a++;
    }
    my_revstr(str);
}

void *adr(int i, const char *format, va_list list)
{
    if (format[i] == 'p') {
        long long unsigned int x = va_arg(list, long long unsigned int);
        my_putstr("0x");
        adr_hexa(list, x);
    }
}
