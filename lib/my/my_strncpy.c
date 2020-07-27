/*
** EPITECH PROJECT, 2017
** my_strncpy.c
** File description:
** For lib: function for cpy two strings with n caractere
*/

char *my_strncpy(char *dest, char const *src, int n)
{
	int i = 0;

	for (; src[i] != '\0' && i < n; ++i)
		dest[i] = src[i];
	for (; i < n; ++i)
		dest[i] = '\0';
	return (dest);
}