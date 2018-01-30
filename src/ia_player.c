/*
** EPITECH PROJECT, 2018
** ia_player
** File description:
** ia_player by florian gau
*/

#include "my.h"

int chose_ia_play(char **tab, int line, int *nb_del)
{
	int index = 1;
	int nb_pipe = 0;

	while (tab[line][index] != '*') {
		if (tab[line][index] == '|') {
			nb_pipe++;
		}
		index++;
	}
	if (nb_pipe >= *nb_del)
		return (line);
	else if (nb_pipe < *nb_del && tab[line][1] != '*') {
		line++;
		return (chose_ia_play(tab, line, nb_del));
	}else {
		line = 1;
		*nb_del = *nb_del - 1;
		return (chose_ia_play(tab, line, nb_del));
	}
}

char **ia_turn(char **tab, int nb_line, s_ia *ia, int *nb_pipe)
{
	int nb_del = 3 - (ia->match % 3);
	int it_ok = 0;
	int line = 1;

	if (nb_del == 0)
		nb_del = ia->nbdel;
	printf("nb_del = %d\n", nb_del);
	line = chose_ia_play(tab, line, &nb_del);
	tab = del_pipe(tab, line, nb_del, nb_line);
	*nb_pipe = *nb_pipe - nb_del;
	return (tab);
}
