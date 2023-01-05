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


sfRenderWindow *create_renderwindow(unsigned int x, unsigned int y,
unsigned int bpp, char *title)
{
    sfVideoMode video_mode = {x, y, bpp};

    return (sfRenderWindow_create(video_mode, title, sfResize | sfClose, NULL));
}

int analyse_events(general *info)
{
    int j;
    if (info->event.type == sfEvtMouseButtonPressed) {
        j = manage_mouse_click(info);
        return (j);
    }
    return (0);
}

int manage_mouse_click(general *info)
{
    int len = info->event.mouseButton.x;
    int hei = info->event.mouseButton.y;
    int i;

    i = button(info, len, hei);
    getaway(info, len, hei);

    return (i);
}

int main(int argc, int **argv)
{
    general *info;
    int k = 0;
    int l;
    float x = 0;
    float y = rand() % 1000;

    info = malloc(sizeof(struct general));
    frst_init(info);
    scnd_init(info);
    l = comparison(argc, argv);
    if (l != 0) {
        wndw_open(info, k, &x, &y);
    } else {
        my_putstr("\tIt's really simple, if something moves, you shoot it!\n\t"
        "\tNothing more than that.\n\nThe reason is really simple : cake "
        "is sugar, sugar can cause diabetes, and\nyou don't want diabetes\n");
    }
}
