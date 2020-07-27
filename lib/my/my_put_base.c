/*
** EPITECH PROJECT, 2017
** my_put_base.c
** File description:
** For lib
*/

#include "my.h"

int my_put_base(char *base, long nb)
{
	int length = my_strlen(base);

	if (nb >= length)
		my_put_base(base, nb / length);
	my_putchar(base[nb % length]);
	return (0);
}