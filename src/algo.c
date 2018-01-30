/*
** EPITECH PROJECT, 2018
** algo
** File description:
** algo by florian gau
*/

#include "my.h"

void algo(char **tab, int nb_line)
{
	int nb_pipe = nb_line * nb_line;

	while (nb_pipe > 0) {
		tab = player_turn(tab, nb_line, &nb_pipe);
		print_tab(nb_line, tab);
		//ia_turn();
	}
}
