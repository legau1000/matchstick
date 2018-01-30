/*
** EPITECH PROJECT, 2018
** algo
** File description:
** algo by florian gau
*/

#include <unistd.h>
#include "my.h"

int algo(char **tab, int nb_line, int nb_del_max, s_ia ia)
{
	int nb_pipe = nb_line * nb_line;

	ia.nbdel = nb_del_max;
	while (nb_pipe > 0 && tab) {
		tab = player_turn(tab, nb_line, &nb_pipe, &ia);
		if (tab)
			print_tab(nb_line, tab);
		if (nb_pipe > 0 && tab) {
			ia_turn(tab, nb_line, &ia, &nb_pipe);
			print_tab(nb_line, tab);
		} else if (tab) {
			write(1, "You lost, too bad...\n", 21);
			return (2);
		}
	}
	if (!tab)
		return (0);
	write(1, "I lost... snif... but I'll get you next time!!\n", 47);
	return (1);
}
