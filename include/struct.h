/*
** EPITECH PROJECT, 2017
** Projet MINISHELL1
** File description:
** finction structure
*/

#ifndef STRUCT_H
#define STRUCT_H

typedef struct list {
	int nbr_lenv;
	int check_path;
	int prompt;
	int stop;
	char **cpy_env;
	char **cpy_path;
	char **arg;
}list_t;

#endif