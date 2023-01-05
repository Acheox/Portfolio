/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** display a game
*/

#include <stdio.h>
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/System/Clock.h>
#include "struct.h"

sfVector2f pos(float *x, float *y)
{
    sfVector2f pose = {*x, *y};
    return pose;
}

int anim(general *info, float *x, float *y)
{
    move_rect(&(info->rect), 32, 64);
    sfSprite_setTextureRect(info->cakeS2, info->rect);
    sfRenderWindow_drawSprite(info->wndw, info->cakeS2, NULL);
}

void move_rect (sfIntRect *rect , int offset, int max_value)
{
    if (rect->left < (max_value - offset)){
        rect->left += offset;
    } else {
        rect->left = 0;
    }
}

int timer(general *info, float *x, float *y)
{
    info->time = sfClock_getElapsedTime(info->clock);
    info->seconds = info->time . microseconds / 1000000.0;
    if (info->seconds > 0.1) {
        moving(info, x, y);
        anim(info, x, y);
        sfClock_restart(info->clock);
    }
    sfRenderWindow_drawSprite(info->wndw, info->cakeS2, NULL);
}

int moving(general *info, float *x, float *y)
{
    *x = *x + 45.0;
    sfSprite_setPosition(info->cakeS2, pos(x, y));
}
