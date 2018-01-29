/*
** EPITECH PROJECT, 2017
** Test Criterion
** File description:
** bistro-matic
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

void redirect_all_std(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(bad_arg_neg, neg_arg_av_one, .init = redirect_all_std)
{
	char *av_zero = "3";
	char *av_one = "-26";
	char *av_two = "35";
	char *av[] = {av_zero, av_one, av_two};

	cr_assert(errors(3, av) == 84);
}

Test(bad_arg_neg, neg_arg_av_two, .init = redirect_all_std)
{
	char *av_zero = "3";
	char *av_one = "26";
	char *av_two = "-35";
	char *av[] = {av_zero, av_one, av_two};

	cr_assert(errors(3, av) == 84);
}

Test(sad_arg_null, neg_arg_av_one, .init = redirect_all_std)
{
	char *av_zero = "3";
	char *av_one = "0";
	char *av_two = "-35";
	char *av[] = {av_zero, av_one, av_two};

	cr_assert(errors(3, av) == 84);
}

Test(bad_arg_null, neg_arg_av_one, .init = redirect_all_std)
{
	char *av_zero = "3";
	char *av_one = "34";
	char *av_two = "0";
	char *av[] = {av_zero, av_one, av_two};

	cr_assert(errors(3, av) == 84);
}
