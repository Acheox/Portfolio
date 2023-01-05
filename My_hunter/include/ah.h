/*
** EPITECH PROJECT, 2022
** ahhhh
** File description:
** ahhhhhh
*/

#ifndef AH_H
    #define AH_H

    void my_putchar(char c);
    int my_revstr(char *str);
    int my_put_nbr(int nb);
    int my_putstr(char const *str);
    int my_strlen(char const *str);
    char *my_strcpy(char *dest, char const *src);
    int xletter(int i, const char *format, va_list list);
    int binary(int i, const char *format, va_list list);
    void adrhexa(int i, const char *format, va_list list);
    int octal(int i, const char *format, va_list list);
    int xletter(int i, const char *format, va_list list);
    int flag_u(int i, char const *format, va_list list);
    void *adr(int i, const char *format, va_list list);

#endif
