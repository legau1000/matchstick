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
		src/ia_player.c				\
		src/my_strlen.c				\
		src/player_turn.c			\
		src/error_player.c			\
		src/adding_map.c			\
		src/my_getnbr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

.SILENT:

$(NAME):	$(OBJ)
	$(CC)  -o $(NAME) $(OBJ)
		@echo "Compilation faite!"

all:	$(NAME)

clean:
	rm -f $(OBJ)
		@echo "Clean faite!"

fclean: clean
	rm -f $(NAME)
		@echo "FClean faite!"

re:	fclean all
		@echo "Re fait!"

tests_run:
	make -C tests/ re
	./units_tests
	make -C tests/ fclean

.PHONY: clean fclean re all
