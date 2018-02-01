##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## makefile
##

CC	=	gcc

SRC	=	src/error/errors.c			\
		src/main.c				\
		src/get_next_line.c			\
		src/algo.c				\
		src/print_all.c				\
		src/my_putstr.c				\
		src/my_putchar.c			\
		src/my_put_nbr.c			\
		src/ia_player.c				\
		src/my_strlen.c				\
		src/player_turn.c			\
		src/error_player.c			\
		src/adding_map.c			\
		src/my_getnbr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

.SILENT:

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC)  -o $(NAME) $(OBJ)
		@echo "Compilation faite!"

clean:
	rm -f $(OBJ)
		@echo "Clean fait!"

fclean: clean
	rm -f $(NAME)
		@echo "FClean fait!"

re:	fclean all
		@echo "Re fait!"

tests_run:
	make -C tests/ re
	./units_tests
	make -C tests/ fclean

.PHONY: clean fclean re all
