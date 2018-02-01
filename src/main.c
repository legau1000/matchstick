/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int main(int ac, char **av)
{
	char **tab = NULL;
	int result = 0;
	s_ia ia;

	if (errors(ac, av) == 84)
		return (84);
	if (!(tab = adding_map(my_getnbr(av[1]))))
		return (84);
	print_tab(my_getnbr(av[1]), tab);
	result = algo(tab, my_getnbr(av[1]), my_getnbr(av[2]), ia);
	if (result == 1) {
		write(1, "I lost... snif... but I'll get you next time!!", 46);
		write(1, "\n", 1);
	} else if (result == 2)
		write(1, "You lost, too bad...\n", 21);
	free_tab(tab, my_getnbr(av[1]));
	return (result);
}
