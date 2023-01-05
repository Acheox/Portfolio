/*
** EPITECH PROJECT, 2022
** putchar
** File description:
** putchar
*/

#include <unistd.h>
#include <stdarg.h>
#include "ah.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
