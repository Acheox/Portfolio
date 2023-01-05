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

int exitd(sfRenderWindow *wndw, sfSprite *exitS)
{
    sfRenderWindow_drawSprite(wndw, exitS, NULL);
}

sfSprite *exite(sfRenderWindow *wndw)
{
    sfTexture *exitT = sfTexture_createFromFile("exit.png", NULL);
    sfSprite *exitS = sfSprite_create();
    sfVector2f startscale = {0.5, 0.5};
    sfVector2f position = {0, 700};

    sfSprite_setScale(exitS, startscale);
    sfSprite_setTexture(exitS, exitT, sfFalse);
    sfSprite_setPosition(exitS, position);

    return exitS;
}
