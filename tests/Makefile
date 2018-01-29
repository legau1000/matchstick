##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## makefile
##

CFLAGS	=	-Iinclude

SRC	=	test.c			\
		test_two.c		\
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
