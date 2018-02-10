/*
** EPITECH PROJECT, 2017
** Test Criterion
** File description:
** bistro-matic
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "units_test.h"

Test(errors_bad_ac, bad_ac)
{
	char *av[] = {"1", "1", "1"};
	int i = 0;

	cr_assert(errors(1, av) == 84);
}

Test(errors_bad_av, bad_av_two)
{
	char *av[] = {"3", "1", "123E23"};
	int i = 0;

	cr_assert(errors(1, av) == 84);
}

Test(errors_bad_av, bad_av_one)
{
	char *av[] = {"3", "ZZ3", "1"};
	int i = 0;

	cr_assert(errors(3, av) == 84);
}

Test(all_good, good_ac_av)
{
	char *av[] = {"3", "26", "35"};
	int i = 0;

	cr_assert(errors(3, av) == 0);
}
