/*
** EPITECH PROJECT, 2018
** For lib
** File description:
** function for free a char**
*/

#include <stdlib.h>

void my_free_tab(char **tab)
{
	for (int i = 0; tab[i]; ++i)
		free(tab[i]);
	free(tab);
}