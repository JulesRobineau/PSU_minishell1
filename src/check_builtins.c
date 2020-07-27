/*
** EPITECH PROJECT, 2018
** Projet MINISHELL1
** File description:
** function check builtins
*/

#include <unistd.h>
#include "my.h"
#include "myinc.h"
#include "struct.h"

int my_env(list_t *list, char **tab __attribute__((unused)))
{
	my_puttab(list->cpy_env);
	return (0);
}

int my_exit(list_t *list, char **tab)
{
	if (my_strlen_str(tab) == 1) {
		my_putstr("exit\n");
		list->stop = 0;
		return (0);
	}
	my_putstr("exit: Expression Syntax.\n");
	return (-1);
}