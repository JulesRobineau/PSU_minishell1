/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** For lib
*/

#include "my.h"
#include <unistd.h>

int my_putstr(char const *str)
{
	write(1, str, my_strlen(str));
	return (0);
}