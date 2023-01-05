##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## task01
##

SRC	= my_printf.c\
	  hexa.c\
	  binary.c\
	  my_revstr.c\
	  octal.c\
	  adr_hexa.c\
	  flag_u.c\
	  my_putchar.c\
	  my_put_nbr.c\
	  my_putstr.c\
	  my_strcpy.c\
	  my_strlen.c\
	  glycomania.c\
	  menu.c\
	  button.c\
	  ga.c\
	  my_hunter.c\
	  the_h.c\
	  strcmp.c\
	  home.c\
	  init.c

NAME = my_hunter

OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(OBJ) -I. *.h -o $(NAME) -lcsfml-graphics -lcsfml-system
	rm -f *.o

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean
