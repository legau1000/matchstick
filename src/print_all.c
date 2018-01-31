/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include <stdlib.h>
#include "my.h"

void print_tab(int nb_line, char **tab)
{
	int index = 0;

	while (index <= nb_line + 1) {
		my_putstr(tab[index]);
		my_putstr("\n");
		index++;
	}
}
