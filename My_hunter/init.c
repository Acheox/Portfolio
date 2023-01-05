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
#include <stdbool.h>
#include <stdarg.h>

int scnd_init(general *info)
{
    sfVector2f scale = {3, 3};
    info->rect.top = 0;
    info->rect.left = 0;
    info->rect.width = 32;
    info->rect.height = 32;

    sfSprite_setScale(info->cakeS2, scale);
    sfSprite_setTexture(info->cakeS2, info->cakeT2, sfFalse);
}

int frst_init(general *info)
{
    if (info == NULL){
        return (84);
    }
    info->wndw = create_renderwindow(1920, 1080, 32, "Glycomania");
    sfRenderWindow_setFramerateLimit (info->wndw, 42);
    info->cakeT2 = sfTexture_createFromFile("cake2.png", NULL);
    info->cakeS2 = sfSprite_create();
    info->clock = sfClock_create ();
    info->backS = backg(info->wndw);
    info->starterS = starter(info->wndw);
    info->exitS = exite(info->wndw);
    info->d = 0;
}

int wndw_open(general *info, int k, float *x, float *y)
{
    while (sfRenderWindow_isOpen(info->wndw)) {
        sfRenderWindow_display(info->wndw);
        backd(info->wndw, info->backS);
        while (sfRenderWindow_pollEvent(info->wndw, &(info->event))) {
            closer(info);
        }
        if (k == 0) {
            k = analyse_events(info);
        }
        if (k == 0){
            display_menu(info);
        }
        if (k > 0) {
            display_game(info, x, y);
        }
    }
}

int closer(general *info)
{
    if (info->event.type == sfEvtClosed) {
        sfRenderWindow_close(info->wndw);
    }
}
