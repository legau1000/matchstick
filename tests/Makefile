##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## makefile
##

CFLAGS	=	-Iinclude

SRC	=	test.c			\
		test_two.c		\
		test_err.c		\
		tab_test.c		\
		algo_test.c		\
		test_get_next_line.c	\
		../src/my_getnbr.c	\
		../src/algo.c		\
		../src/free_all.c	\
		../src/my_put_nbr.c	\
		../src/my_putchar.c	\
		../src/ia_player.c	\
		../src/my_putstr.c	\
		../src/print_all.c	\
		../src/adding_map.c	\
		../src/error_player.c	\
		../src/my_strlen.c	\
		../src/player_turn.c	\
		../src/get_next_line.c	\
		../src/error/errors.c

OBJ	=	$(SRC:.c=.o)

NAME	=	units_tests

.SILENT:

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -lcriterion --coverage
	mv units_tests ../
		@echo Compilation tests faite!

all:	$(NAME)

clean:
	rm -f $(OBJ)
		@echo Clean fait!

fclean: clean
	rm -f ../$(NAME)
		@echo Fclean fait!

re:	fclean all
		@echo RE fait!

.PHONY: clean
