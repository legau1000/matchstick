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

int verif_match(char *mat)
{
	int index_mat = 0;

	while (mat[index_mat]) {
		if (mat[index_mat] > '9' || mat[index_mat] < '0') {
			write(1, "Error: invalid input ", 21);
			write(1, "(positive number expected)\n", 31);
			return (84);
		}
		index_mat++;
	}
	if (my_getnbr(mat) <= 0) {
		write(1, "Error: you have to remove at least one match\n", 45);
		return (84);
	}
	return (0);
}

int verif_line(char *lin, int nb_line)
{
	int index_lin = 0;

	while (lin[index_lin]) {
		if (lin[index_lin] > '9' || lin[index_lin] < '0') {
			write(1, "Error: invalid input ", 21);
			write(1, "(positive number expected)\n", 31);
			return (84);
		}
		index_lin++;
	}
	if (my_getnbr(lin) == 0 || my_getnbr(lin) > nb_line) {
		write(1, "Error: this line is out of range\n", 33);
		return (84);
	}
	return (0);
}

static int verif_size(char *mat, char *lin)
{
	if (my_strlen(mat) == 0 || my_strlen(lin) == 0)
		return (84);
	else
		return (0);
}

int err(char *mat, char *lin, char **tab, int *pipe)
{
	int line = 0;
	int match = 0;

	if (!mat || !lin)
		return (84);
	line = my_getnbr(lin);
	match = my_getnbr(mat);
	if (match > nb_pipe_here(tab, line)) {
		write(1, "Error: not enough matches on this line\n", 39);
		return (84);
	}
	if (match > pipe[1]) {
		write(1, "Error: you cannot remove more than ", 35);
		my_put_nbr(pipe[1]);
		write(1, " matches per turn\n", 18);
		return (84);
	}
	return (verif_match(mat));
}
