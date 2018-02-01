/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

void free_value(char *line, char *match)
{
	free(line);
	free(match);
}

void free_tab(char **tab, int nb_line)
{
	int index = 0;

	while (index <= nb_line + 1) {
		free(tab[index]);
		index++;
	}
	free(tab);
}
