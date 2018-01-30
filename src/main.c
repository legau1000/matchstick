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
		printf("%s\t%d\n", tab[index], index);
		index++;
	}
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

int main(int ac, char **av)
{
	char **tab = NULL;

	if (errors(ac, av) == 84)
		return (84);
	if (!(tab = adding_map(my_getnbr(av[1]))))
		return (84);
	print_tab(my_getnbr(av[1]), tab);
	algo(tab, my_getnbr(av[1]));
	free_tab(tab, my_getnbr(av[1]));
	return (0);
}
