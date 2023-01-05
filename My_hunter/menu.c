/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** display a game
*/

#include <SFML/Graphics.h>
#include <SFML/System/Clock.h>
#include "struct.h"

int backd(sfRenderWindow *wndw, sfSprite *backS)
{
    sfRenderWindow_drawSprite(wndw, backS, NULL);
}

sfSprite *backg(sfRenderWindow *wndw)
{
    sfTexture *backT = sfTexture_createFromFile("fond.jpg", NULL);
    sfSprite *backS = sfSprite_create();
    sfVector2f backscale = {3.5, 3.1};

    sfSprite_setScale(backS, backscale);
    sfSprite_setTexture(backS, backT, sfFalse);

    return backS;
}

int starterd(sfRenderWindow *wndw, sfSprite *starterS)
{
    sfRenderWindow_drawSprite(wndw, starterS, NULL);
}

sfSprite *starter(sfRenderWindow *wndw)
{
    sfTexture *starterT = sfTexture_createFromFile("starter.png", NULL);
    sfSprite *starterS = sfSprite_create();
    sfVector2f startscale = {0.5, 0.5};
    sfVector2f position = {200, 250};

    sfSprite_setScale(starterS, startscale);
    sfSprite_setTexture(starterS, starterT, sfFalse);
    sfSprite_setPosition(starterS, position);

    return starterS;
}
