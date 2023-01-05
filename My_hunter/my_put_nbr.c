/*
** EPITECH PROJECT, 2022
** putnbr
** File description:
** putnbr
*/

#include <unistd.h>
#include <stdarg.h>
#include "ah.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
    }
    my_putchar((nb % 10) + 48);
}
