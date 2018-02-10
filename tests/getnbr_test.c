/*
** EPITECH PROJECT, 2018
** Matchstick
** File description:
** Units tests getnbr
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "units_test.h"

Test(get_nbr, positiv_low_number)
{
	cr_assert(my_getnbr("20") == 20);
}

Test(get_nbr, positiv_high_number)
{
	cr_assert(my_getnbr("1234567") == 1234567);
}

Test(get_nbr, negativ_low_number)
{
	cr_assert(my_getnbr("-20") == -20);
}

Test(get_nbr, negativ_high_number)
{
	cr_assert(my_getnbr("-1234567") == -1234567);
}
