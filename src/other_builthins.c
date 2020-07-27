/*
** EPITECH PROJECT, 2018
** Projet MINISHELL2
** File description:
** function for treat str with fork
*/

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "my.h"
#include "myinc.h"
#include "struct.h"

int my_check_str(char *str)
{
	int i = 0;

	for (; str[i]; ++i) {
		if (str[i] == '/')
			return (1);
	}
	return (0);
}

int my_access_path(list_t *list, char *str)
{
	pid_t son;
	int satuts = 0;

	if (access(str, X_OK) == 0) {
		fils = fork();
		if (fils == 0) {
			execve(str, list->arg, list->cpy_env);
			exit(1);
		} else {
			waitpid(&son, &status, NULL);
			my_putstr(strsignal(&status));
		}
		return (1);
	}
	return (0);
}

int other_builtins(list_t *list)
{
	char *str = NULL;

	for (int i = 0; list->cpy_path[i]; ++i) {
		if (my_check_str(list->arg[0]) == 0) {
			str = my_strcat(list->cpy_path[i], list->arg[0]);
			if (my_access_path(list, str) == 1)
				return (1);
			free(str);
		} else {
			if (my_access_path(list, list->arg[0]) == 1)
				return (1);
		}
	}
	my_putstr(list->arg[0]);
	my_putstr(": Command not found.\n");
	return (0);
}