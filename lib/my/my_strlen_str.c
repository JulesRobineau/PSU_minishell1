/*
** EPITECH PROJECT, 2018
** Projet MINISHELL2
** File description:
** function for count number of string on char **
*/

int my_strlen_str(char **tab)
{
	int i = 0;

	for (; tab[i]; ++i);
	return (i);
}