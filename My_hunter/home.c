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

void display_menu(general *info)
{
    starterd(info->wndw, info->starterS);
    exitd(info->wndw, info->exitS);
}

void display_game(general *info, float *x, float *y)
{
    int len = info->event.mouseButton.x;
    int hei = info->event.mouseButton.y;

    timer(info, x, y);
    if (info->event.type == sfEvtMouseButtonPressed) {
        if (len < (*x + 96) && len > *x && hei > *y && hei < (*y + 96)) {
            *x = 0;
            *y = rand() % 1000;
        }
    }
    defeat(info, x, y);
}

void defeat(general *info, float *x, float *y)
{
    if (*x >= 1920){
        info->d += 1;
        *x = 0;
        *y = rand() % 1000;
        if (info->d == 3){
            sfRenderWindow_close(info->wndw);
            my_putstr("\t\t\tSorry, you have failed.\n\tDiabetes has "
            "reached you. Now, it's time to "
            "take your insulin\n\t\t\teverywhere"
            " with you...\n");
        }

    }
}
