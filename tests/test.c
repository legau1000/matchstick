/*
** EPITECH PROJECT, 2017
** Test Criterion
** File description:
** bistro-matic
*/

#include <unistd.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "units_test.h"

Test(bad_arg_neg, neg_arg_av_one)
{
	char *av[] = {"3", "-34", "35"};
	int i = 0;

	cr_assert(errors(3, av) == 84);
}

Test(bad_arg_neg, neg_arg_av_two)
{
	char *av[] = {"3", "26", "-35"};
	int i = 0;

	cr_assert(errors(3, av) == 84);
}

Test(sad_arg_null, neg_arg_av_one)
{
	char *av[] = {"3", "0", "-35"};
	int i = 0;

	cr_assert(errors(3, av) == 84);
}

Test(bad_arg_null, neg_arg_av_one)
{
	char *av[] = {"3", "34", "0"};
	int i = 0;

	cr_assert(errors(3, av) == 84);
}
