/*
** EPITECH PROJECT, 2018
** algo_test
** File description:
** algo_test by florian gau
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../src/my.h"

Test(algo_return, algo_return_0)
{
	s_ia ia;

	cr_assert(algo(NULL, 3, 4, ia) == 0);
}
