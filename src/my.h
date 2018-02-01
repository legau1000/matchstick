/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#ifndef __MY_H__
#define __MY_H__

typedef struct s_name
{
	int nbdel;
	int match;
}s_ia;

int errors(int, char**);
int my_getnbr(char const *str);
char **adding_map(int nb_line);
int algo(char **tab, int nb_line, int nbdel, s_ia);
char *get_next_line(int fd);
char **player_turn(char **tab, int nb_line, int *nb_pipe, s_ia*);
int my_strlen(char const *str);
void print_tab(int nb_line, char **tab);
int err(char *mat, char *lin, char **tab, int nb_line);
int verif_only_number(char *mat, char *lin);
char **ia_turn(char **tab, int, s_ia *ia, int*);
int nb_pipe_here(char **tab, int line);
char **del_pipe(char **tab, int, int, int);
void my_put_nbr(int nb);
void my_putstr(char const *str);
void print_tab(int nb_line, char **tab);
int verif_match(char *mat);
int verif_line(char *lin);
void free_value(char *line, char *match);
void free_tab(char **tab, int nb_line);

#endif
