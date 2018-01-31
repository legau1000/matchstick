/*
** EPITECH PROJECT, 2018
** errors
** File description:
** errors
*/

#include "../my.h"

int errors(int ac, char **av)
{
	int index = 0;

	if (ac != 3)
		return (84);
	while (av[1][index]) {
		if (av[1][index] < '0' || av[1][index] > '9')
			return (84);
		index++;
	}
	index = 0;
	while (av[2][index]) {
		if (av[2][index] < '0' || av[2][index] > '9')
			return (84);
		index++;
	}
	if (my_getnbr(av[1]) <= 0 || my_getnbr(av[2]) <= 0)
		return (84);
	if (my_getnbr(av[1]) > 100)
		return (84);
	return (0);
}
