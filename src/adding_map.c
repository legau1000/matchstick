/*
** EPITECH PROJECT, 2018
** adding map
** File description:
** adding_map by florian gau
*/

#include <stdlib.h>
#include "my.h"

char **adding_map(int nb_line)
{
	char **tab = malloc(sizeof(char*) * (nb_line + 2));
	int index = 0;

	if (!(*tab))
		return (tab);
	while (tab[index]) {
		tab[index] = malloc(sizeof(char) * (nb_line + 1));
		if (!tab[index])
			return (NULL);
		tab[index][nb_line] = '\0';
		index++;
	}
	printf("%d\n", index);
	return (tab);
}
