/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** my_put_nbr
*/

#include <unistd.h>

void	my_putchar(char c);

int verif_neg_or_little(int *nb)
{
	if (*nb == -2147483648) {
		write(1, "-2147483648", 11);
		return (1);
	} else if (*nb < 0) {
		my_putchar('-');
		*nb = *nb * (-1);
	}
	return (0);
}

void	my_put_nbr(int nb)
{
	if (verif_neg_or_little(&nb) == 0) {
	} else if (nb >= 10) {
		my_put_nbr(nb / 10);
	} else
		my_putchar(nb + '0');
}
