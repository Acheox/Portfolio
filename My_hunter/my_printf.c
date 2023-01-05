/*
** EPITECH PROJECT, 2022
** printf
** File description:
** printf
*/

#include <unistd.h>
#include <stdarg.h>
#include "ah.h"

int pourc(int i, const char *format, va_list list)
{
    if (format[i] == '%') {
        i++;
        my_putchar('%');
    }
    if (format[i] == 'c') {
        i++;
        my_putchar(va_arg(list, int));
    }
    if (format[i] == 'd') {
        i++;
        my_put_nbr(va_arg(list, int));
    }
    if (format[i] == 's') {
        i++;
        my_putstr(va_arg(list, char*));
    }
    if (format[i] == 'i') {
        i++;
        my_put_nbr(va_arg(list, int));
    }
}

int my_printf(const char *format, ...)
{
    int i = 0;
    va_list list;
    va_start(list, format);
    while (format[i] != '\0') {
        if (format[i] == '%') {
            i++;
            pourc(i, format, list);
            adr(i, format, list);
            xletter(i, format, list);
            binary(i, format, list);
            octal(i, format, list);
            flag_u(i, format, list);
        } else {
            my_putchar(format[i]);
        }
        i++;
    }
    va_end(list);
    return (i);
}
