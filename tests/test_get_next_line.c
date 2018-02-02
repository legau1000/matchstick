/*
** EPITECH PROJECT, 2017
** Test Criterion
** File description:
** bistro-matic
*/

#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../src/get_next_line.h"

Test(Next_line, first_line)
{
	int fd = open("Makefile", O_RDONLY);
	char *line = get_next_line(fd);

	cr_assert(line[0] == '#');
	cr_assert(line[1] == '#');
	free(line);
}

Test(Next_line, Second_line)
{
	char *test = "## Makefile";
	int fd = open("Makefile", O_RDONLY);
	char *line = NULL;
	int i = 0;

	get_next_line(fd);
	get_next_line(fd);
	line = get_next_line(fd);
	while (test[i]) {
		cr_assert(line[i] == test[i]);
		i++;
	}
	free(line);
}

Test(Bad_fd, Bad_fd)
{
	int fd = open("../test87", O_RDONLY);
	char *line = get_next_line(fd);
	int i = 0;

	cr_assert(line == NULL);
	free(line);
}

Test(Just_n, one_n)
{
	int fd = open("tests/bidon", O_RDONLY);
	char *line = get_next_line(fd);
	int i = 0;

	cr_assert(line[0] == '\0');
	line = get_next_line(fd);
	cr_assert(line == NULL);	
	free(line);
}
