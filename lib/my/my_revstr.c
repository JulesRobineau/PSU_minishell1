/*
** EPITECH PROJECT, 2017
** my_revstr.c
** File description:
** For lib
*/

char *my_revstr(char *str)
{
	int a = 0;
	int b = 0;
	char c;

	while (str[a] != '\0')
		a++;
	a = a - 1;
	while (a > b) {
		c = str[a];
		str[a] = str[b];
		str[b] = c;
		a--;
		b++;
	}
	return (str);
}