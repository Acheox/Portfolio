/*
** EPITECH PROJECT, 2022
** ahhhh
** File description:
** ahhhhhh
*/

#include <stdarg.h>
#include <SFML/Graphics.h>
#include <SFML/System/Clock.h>
#include <stdbool.h>

typedef struct general{
    sfRenderWindow *wndw;
    sfEvent event;
    sfSprite *starterS;
    sfSprite *backS;
    sfSprite *exitS;
    sfSprite *cakeS2;
    sfTexture *cakeT2;
    sfTexture *exitT;
    sfTexture *backT;
    sfTexture *starterT;
    sfVector2f pos;
    sfClock *clock;
    sfTime time;
    float seconds;
    sfVector2f scale;
    sfIntRect rect;
    int d;
} general;

typedef struct menu_s {
    sfSprite *starterS;
    sfTexture *starterT;
    sfSprite *exitS;
    sfTexture *exitT;
    bool is_active;
}menu_t;

typedef struct game_s {
    sfSprite *cakeS;
    sfTexture *cakeT;
    sfSprite *cakeS2;
    sfTexture *cakeT2;
    bool is_active;
}game_t;

#ifndef struct
    #define struct

int starterd(sfRenderWindow *wndw, sfSprite *starterS);
sfSprite *backg(sfRenderWindow *wndw);
int backd(sfRenderWindow *wndw, sfSprite *backS);
sfVector2f pos(float *x, float *y);
int titled(sfRenderWindow *wndw, sfSprite *titleS);
sfSprite *title(sfRenderWindow *wndw);
int analyse_events(general *info);
int manage_mouse_click(general *info);
int button(general *info, int len, int hei);
int timer(general *info, float *x, float *y);
int comparison(int argc, char **argv);
int my_strcmp(char *s1, char *s2);
void display_game(general *info, float *x, float *y);
int the_h(char *argv);
int verif(char *argv);
int exitd(sfRenderWindow *wndw, sfSprite *exitS);
void getaway(general *info, int len, int hei);
void display_menu(general *info);
int closer(general *info);
int moving(general *info, float *x, float *y);
void move_rect(sfIntRect *rect, int offset, int max_value);
int wndw_open(general *info, int k, float *x, float *y);
void defeat(general *info, float *x, float *y);
#endif
