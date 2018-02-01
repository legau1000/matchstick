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

void free_value(s_ia *ia, char *line, char *match)
{
	free(line);
	free(match);
}

void free_value_and_incre(s_ia *ia, char *line, char *match)
{
	free(line);
	free(match);	
	ia->match = my_getnbr(match);
}

char **player_turn(char **tab, int nb_line, int *nb_pipe, s_ia *ia)
{
	char *line = NULL;
	char *match = NULL;

	write(1, "Your turn:\nLine: ", 17);
	if (!(line = get_next_line(0)))
	    return (NULL);
	write(1, "Matches: ", 9);
	if (!(match = get_next_line(0)))
	    return (NULL);
	if (line && match && err(match, line, tab, nb_line) == 0 &&
	    ia->nbdel >= my_getnbr(match)) {
		player_can(match, line);
		tab = del_pipe(tab, my_getnbr(line), my_getnbr(match), nb_line);
		*nb_pipe = *nb_pipe - my_getnbr(match);
	} else if (line && match){
		free_value(ia, line, match);
		return (player_turn(tab, nb_line, nb_pipe, ia));
	}
	free_value_and_incre(ia, line, match);
	return (tab);
}
