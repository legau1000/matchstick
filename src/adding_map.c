/*
** EPITECH PROJECT, 2018
** adding map
** File description:
** adding_map by florian gau
*/

#include <stdlib.h>
#include "my.h"

char **adding_middle_map(char **tab, int nb_line)
{
	int index = 0;
	int index_glob = 1;
	int pipe[] = {(nb_line - 1), (nb_line + 1)};

	while (index_glob <= nb_line) {
		while (index <= (nb_line * 2)) {
			if (index == 0 || index == (nb_line * 2))
				tab[index_glob][index] = '*';
			else if (index > pipe[0] && index < pipe[1])
				tab[index_glob][index] = '|';
			else
				tab[index_glob][index] = ' ';
			index++;
		}
		pipe[0] = pipe[0] - 1;
		pipe[1] = pipe[1] + 1;
		tab[index_glob][index] = '\0';
		index = 0;
		index_glob++;
	}
	return (tab);
}

char **adding_maps(int nb_line, char **tab, int index)
{
	int i = 0;

	while (i <= (nb_line * 2)) {
		tab[index][i] = '*';
		i++;
	}
	tab[index][i] = '\0';
	index = 0;
	i = 0;
	while (i <= (nb_line * 2)) {
		tab[index][i] = '*';
		i++;
	}
	tab[index][i] = '\0';
	return (adding_middle_map(tab, nb_line));
}

char **adding_map(int nb_line)
{
	char **tab = malloc(sizeof(char*) * (nb_line + 3));
	int index = 0;

	if (!tab)
		return (tab);
	tab[nb_line + 1] = NULL;
	while (index <= nb_line + 1) {
		tab[index] = malloc(sizeof(char) * (nb_line * 2) + 2);
		if (!tab[index])
			return (NULL);
		tab[index][nb_line] = '\0';
		index++;
	}
	index--;
	return (adding_maps(nb_line, tab, index));
}
