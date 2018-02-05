/*
** EPITECH PROJECT, 2018
** player_turn
** File description:
** player 
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

char **player_can(char *match, char *line)
{
	write(1, "Player removed ", 15);
	write(1, match, my_strlen(match));
	write(1, " match(es) from line ", 21);
	write(1, line, my_strlen(line));
	write(1, "\n", 1);
}

char **del_pipe(char **tab, int line, int match, int nb_line)
{
	int index = (nb_line * 2);
	int nb_del = 0;

	while (match > 0) {
		if (tab[line][index] == '|') {
			match--;
			tab[line][index] = ' ';
		}
		index--;
	}
	return (tab);
}

char *give_value_to_match(char *match)
{
	write(1, "Matches: ", 9);
	if (!(match = get_next_line(0)))
		return (NULL);
	while (verif_match(match) != 0) {
		free(match);
		write(1, "Matches: ", 9);
		if (!(match = get_next_line(0)))
			return (NULL);
	}
	return (match);
}

char *give_value_to_line(char *line, int nb_line)
{
	write(1, "Line: ", 6);
	if (!(line = get_next_line(0)))
		return (NULL);
	while (verif_line(line, nb_line) != 0) {
		free(line);
		write(1, "Line: ", 6);
		if (!(line = get_next_line(0)))
			return (NULL);
	}
	return (line);
}

char **player_turn(char **tab, int *pipe, int *nb_pipe, s_ia *ia)
{
	char *line = NULL;
	char *match = NULL;

	if (!(line = give_value_to_line(line, pipe[0])))
		return (NULL);
	if (!(match = give_value_to_match(match)))
		return (NULL);
	if (line && match && err(match, line, tab, pipe) == 0 &&
	    ia->nbdel >= my_getnbr(match)) {
		player_can(match, line);
		tab = del_pipe(tab, my_getnbr(line), my_getnbr(match), pipe[0]);
		*nb_pipe = *nb_pipe - my_getnbr(match);
	} else {
		free_value(line, match);
		return (player_turn(tab, pipe, nb_pipe, ia));
	}
	ia->match = my_getnbr(match);
	free_value(line, match);
	return (tab);
}
