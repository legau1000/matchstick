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

void redirect_all_std(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(print_letter, prin_letter, .init = redirect_all_std)
{
	my_putchar('C');
	cr_assert_stdout_eq_str("C");
}
