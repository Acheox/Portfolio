/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** display a game
*/

#include <stdio.h>
#include <SFML/Graphics.h>
#include <SFML/System/Clock.h>
#include "struct.h"
#include <stdio.h>

int comparison(int argc, char **argv)
{
    int z;
    char *s1 = "-h";
    char *s2 = argv[1];

    z = my_strcmp(s1, s2);

    return (z);
}
