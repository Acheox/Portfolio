/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** display a game
*/

#include <stdio.h>

int my_strcmp(char *s1, char *s2)
{
    int i = 0;

    if (!s1 || !s2){
        return (84);
    }
    while (s1[i]) {
        if (s1[i] > s2[i])
            return (1);
        if (s1[i] < s2[i])
            return (-1);
        i ++;
    }
    return (0);
}
