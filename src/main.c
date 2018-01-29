/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include <stdlib.h>
#include "my.h"

void print_tab(char **tab)
{
	int index = 0;

	printf("print_map\n");
	while (tab[index]) {
		printf("%s\n", tab[index]);
		index++;
	}
	printf("END\n");
}

int main(int ac, char **av)
{
	char **tab = NULL;

	if (errors(ac, av) == 84)
		return (84);
	if (!(tab = adding_map(my_getnbr(av[1]))))
		return (84);
	print_tab(tab);
	//algo();
	return (0);
}
