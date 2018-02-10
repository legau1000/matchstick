/*
** EPITECH PROJECT, 2017
** Test Criterion
** File description:
** bistro-matic
*/

#include <stdlib.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "units_test.h"

Test(bad_line, badline)
{
	char *mat = "2";
	char *line = NULL;
	char **tab = NULL;
	int *pipe = NULL;

	cr_assert(err(mat, line, tab, pipe) == 84);
}

Test(bad_match, badmatch_neg)
{
	char *mat = "-1";
	char *line = "2";
	char **tab = NULL;
	int *pipe = NULL;

	cr_assert(err(mat, line, tab, pipe) == 84);
}
