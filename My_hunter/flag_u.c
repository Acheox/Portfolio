/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** flag_u
*/

#include <unistd.h>
#include <stdarg.h>
#include "ah.h"

int nb_flag_u(unsigned int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 10) {
        nb_flag_u(nb / 10);
    }
    my_putchar((nb % 10) + 48);
}

int flag_u(int i, char const *format, va_list list)
{
    nb_flag_u(va_arg(list, unsigned int));
}
