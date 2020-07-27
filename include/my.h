/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** For lib: prototypes all funtions .c
*/

#ifndef MY_H
#define MY_H

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
int search_str(char **tab, char *str);
char *my_revstr(char *str);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strcat(char *dest, char const *src);
char *my_strdup(char const *src);
int my_printf(char *s, ...);
int my_put_base(char *base, long nb);
char *my_realloc(char *src, int new_size);
char *get_next_line(int fd);
char **mystr_toword_array(char *str, char carac);
char *my_cleanup_str(char *str, char carac);
void my_free_tab(char **tab);
void my_puttab(char **tab);
int my_strlen_str(char **tab);

#endif
