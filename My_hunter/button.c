/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** display a game
*/

#include <SFML/Graphics.h>
#include <SFML/System/Clock.h>
#include "struct.h"

int button(general *info, int len, int hei)
{
    if (len < 700 && len > 315 && hei < 605 && hei > 490) {
        return (1);
    }
    return (0);
}

void getaway(general *info, int len, int hei)
{
    if (len < 270 && len > 150 && hei < 900 && hei > 780){
        sfRenderWindow_close(info->wndw);
    }
}
