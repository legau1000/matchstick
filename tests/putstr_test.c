/*
** EPITECH PROJECT, 2018
** Matchstick
** File description:
** Units tests getnbr
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "units_test.h"

void redirect_std(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(putstr, print_string, .init = redirect_std)
{
	my_putstr("Bonsoir je suis florian");
	cr_assert_stdout_eq_str("Bonsoir je suis florian");
}
