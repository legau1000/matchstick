/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#ifndef __MY_H__
#define __MY_H__

int errors(int, char**);
int my_getnbr(char const *str);
char **adding_map(int nb_line);
void algo(char **tab, int nb_line);
char *get_next_line(int fd);
char **player_turn(char **tab, int nb_line, int *nb_pipe);
int my_strlen(char const *str);
void print_tab(int nb_line, char **tab);

#endif
