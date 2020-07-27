/*
** EPITECH PROJECT, 2017
** my_strcat.c
** File description:
** For lib: function for concatenate two strings
*/

#include <stdlib.h>
#include "my.h"

char *my_strcat(char *dest, char const *src)
{
	int i = 0;
	int j = 0;
	int cpt = my_strlen(src) + my_strlen(dest);
	char *save = malloc(sizeof(char) * (cpt + 1));

	if (save == NULL)
		return (NULL);
	save = my_strcpy(save, dest);
	i = my_strlen(dest);
	for (; src[j]; ++j)
		save[i + j] = src[j];
	save[i + j] = '\0';
	return (save);
}