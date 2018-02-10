/*
** EPITECH PROJECT, 2018
** tab_test.c
** File description:
** tab_test by florian gau
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "units_test.h"

Test(index_NULL_or_egal_nb_line, test_index_for_created_map)
{
	int pipe[] = {1, 2};

	cr_assert(tabs(0, pipe, 4) == '*');
	cr_assert(tabs(8, pipe, 4) == '*');
}

Test(test_pipe, test_pipe)
{
	int pipe[] = {2, 6};

	cr_assert(tabs(3, pipe, 4) == '|');
	cr_assert(tabs(5, pipe, 4) == '|');
}

Test(test_space, test_space)
{
	int pipe[] = {3, 4};

	cr_assert(tabs(3, pipe, 4) == ' ');
	cr_assert(tabs(5, pipe, 4) == ' ');
}
