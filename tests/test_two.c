/*
** EPITECH PROJECT, 2017
** Test Criterion
** File description:
** bistro-matic
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(errors_bad_ac, bad_ac)
{
	char *av_zero = "1";
	char *av_one = "1";
	char *av_two = "1";
	char *av[] = {av_zero, av_one, av_two};

	cr_assert(errors(1, av) == 84);
}

Test(errors_bad_av, bad_av_two)
{
	char *av_zero = "3";
	char *av_one = "1";
	char *av_two = "2134R134";
	char *av[] = {av_zero, av_one, av_two};

	cr_assert(errors(1, av) == 84);
}

Test(errors_bad_av, bad_av_one)
{
	char *av_zero = "3";
	char *av_one = "Z234Z";
	char *av_two = "1";
	char *av[] = {av_zero, av_one, av_two};

	cr_assert(errors(3, av) == 84);
}

Test(all_good, good_ac_av)
{
	char *av_zero = "3";
	char *av_one = "26";
	char *av_two = "35";
	char *av[] = {av_zero, av_one, av_two};

	cr_assert(errors(3, av) == 0);
}
