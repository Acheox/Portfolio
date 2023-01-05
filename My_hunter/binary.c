/*
** EPITECH PROJECT, 2022
** binary
** File description:
** binary printf
*/

#include <unistd.h>
#include <stdarg.h>
#include "ah.h"

int binary(int i, const char *format, va_list list)
{
    if (format[i] == 'b') {
        int tab[8];
        int count = 0;
        int bin = va_arg(list, int);
        while (count <= 7) {
            tab[count] = bin % 2;
            bin = bin / 2;
            count++;
        }
        while (count >= 1) {
        count -= 1;
        my_put_nbr(tab[count]);
        }
    }
}
