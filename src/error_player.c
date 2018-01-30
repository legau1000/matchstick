/*
** EPITECH PROJECT, 2018
** errors player
** File description:
** error player
*/

#include <unistd.h>
#include "my.h"

int nb_pipe_here(char **tab, int line)
{
	int nb_pipe = 0;
	int index = 1;

	while (tab[line][index] != '*') {
		if (tab[line][index] == '|')
			nb_pipe++;
		index++;
	}
	return (nb_pipe);
}

int verif_only_number(char *mat, char *lin)
{
	int index_mat = 0;
	int index_lin = 0;

	while (mat[index_mat]) {
		if (mat[index_mat] > '9' || mat[index_mat] < '0') {
			write(1, "Type only numbers!\n", 19);
			return (84);
		}
		index_mat++;
	}
	while (lin[index_lin]) {
		if (lin[index_lin] > '9' || lin[index_lin] < '0') {
			write(1, "Type only numbers!\n", 19);
			return (84);
		}
		index_lin++;
	}
	return (0);
}

int err(char *mat, char *lin, char **tab, int nb_line)
{
	int line = 0;
	int match = 0;

	if (verif_only_number(mat, lin) == 84)
		return (84);
	line = my_getnbr(lin);
	match = my_getnbr(mat);
	if (line > nb_line || line <= 0) {
		write(1, "Error: this line is out of range\n", 33);
		return (84);
	}
	if (match <= 0) {
		write(1, "Error: you have to remove at least one match\n", 45);
		return (84);
	}
	if (match > nb_pipe_here(tab, line)) {
		write(1, "Error: not enough matches on this line\n", 39);
		return (84);
	}
	return (0);
}
