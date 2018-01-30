/*
** EPITECH PROJECT, 2018
** player_turn
** File description:
** player 
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

int nb_pipe_here(char **tab, int line, int nb_line)
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

int err(char *mat, char *lin, char **tab, int nb_line)
{
	int line = my_getnbr(lin);
	int match = my_getnbr(mat);

	if (line > nb_line || line <= 0) {
		write(1, "Error: this line is out of range\n", 33);
		return (84);
	}
	if (match <= 0) {
		write(1, "Error: you have to remove at least one match\n", 45);
		return (84);
	}
	if (match > nb_pipe_here(tab, line, nb_line)) {
		write(1, "Error: not enough matches on this line\n", 39);
		return (84);
	}
	return (0);
}

char **player_turn(char **tab, int nb_line, int *nb_pipe)
{
	char *line = NULL;
	char *match = NULL;

	write(1, "Your turn:\nLine: ", 17);
	line = get_next_line(0);
	write(1, "Matches: ", 9);
	match = get_next_line(0);
	if (err(match, line, tab, nb_line) == 0) {
		write(1, "Player removed ", 15);
		write(1, match, my_strlen(match));
		write(1, " match(es) from line ", 21);
		write(1, line, my_strlen(line));
		write(1, "\n", 1);
	}
	*nb_pipe = *nb_pipe - 1;
	free(line);
	free(match);
	return (tab);
}
