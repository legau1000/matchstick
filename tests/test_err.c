/*
** EPITECH PROJECT, 2017
** Test Criterion
** File description:
** bistro-matic
*/

#include <stdlib.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(bad_line, badline)
{
	char *mat = "2";
	char *line = "2";
	char **tab = NULL;
	int nb_line = 1;

	cr_assert(err(mat, line, tab, nb_line) == 84);
}

Test(bad_match, badmatch_neg)
{
	char *mat = "-1";
	char *line = "2";
	char **tab = NULL;
	int nb_line = 7;

	cr_assert(err(mat, line, tab, nb_line) == 84);
}
