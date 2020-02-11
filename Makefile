##
## EPITECH PROJECT, 2019
## Sokoban
## File description:
## find the Biggest Square
##

CC	=	gcc

NAME	=	my_sokoban

SRC	= ./src/main.c \
./include/my.h \
./tools/my_putstr.c \
./tools/my_putchar.c \
./src/sokoban_man.c \
./src/window.c \
./tools/my_strcmp.c \
./src/double_star.c \
./src/player.c	\
./src/movement.c \


OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-g -W -Wextra -Wall -Iinclude

LFLAGS =        -lncurses

all:	$(NAME)

$(NAME):$(OBJ)
	$(CC) -o $(NAME) $(OBJ) -g $(CFLAGS) $(LFLAGS)

clean:
	rm -f *.o *~ *#
	rm -f tools/*.o tools/*~ tools/*#
	rm -f src/*.o src/*~ src/*#

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
