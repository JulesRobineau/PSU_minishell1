/*
** EPITECH PROJECT, 2018
** Lib
** File description:
** function for clean a str
*/

#include <stdio.h>
#include <stdlib.h>

int check_carac(char carac)
{
	if (carac >= 33 && carac <= 126)
		return (1);
	return (0);
}

int cpt_char_str(char *str, char carac)
{
	int cpt = 0;

	for (int i = 0; str[i]; i++) {
		if (str[i] == carac && check_carac(str[i + 1]) == 1)
			cpt++;
		else if (str[i] != carac && check_carac(str[i]) == 1)
			cpt++;
	}
	return (cpt);
}

char *my_cleanup_str(char *str, char carac)
{
	int i = 0;
	int j = 0;
	char *dest = malloc(sizeof(char) * (cpt_char_str(str, carac) + 1));

	if (dest == NULL)
		return (NULL);
	for (; str[i]; i++) {
		if (str[i] == carac && check_carac(str[i + 1]) == 1) {
			dest[j] = str[i];
			j++;
		}
		if (str[i] != carac && check_carac(str[i]) == 1) {
			dest[j] = str[i];
			j++;
		}
	}
	dest[cpt_char_str(str, carac)] = '\0';
	return (dest);
}