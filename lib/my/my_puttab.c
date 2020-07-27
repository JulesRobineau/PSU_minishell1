/*
** EPITECH PROJECT, 2018
** my_puttab.c
** File description:
** for lib: function disp a char**
*/

#include "my.h"

void my_puttab(char **tab)
{
	for (int i = 0; tab[i]; ++i) {
		my_putstr(tab[i]);
		my_putchar('\n');
	}
}