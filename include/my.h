/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** .
*/

#include <stddef.h>
#ifndef MY_H
#define MY_H

void *my_memset(void *str, int c, size_t n);
int my_show_word_array(char * const *tab);
void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nombre);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int nb);
char *my_revstr(char *str);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int nb);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
char **my_str_to_word_array(char *str, char c);
int my_str_isprintable(char const *str);
void my_showstr(char const *str);
void my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char *return_to_find(char const *to_find, int a, char *str, int b);
int my_put_array(char **arr);
int nb_carac(char *str);
int nb_line(char *str);
int my_atoi(char const **str);
void my_put_double_char(char **str);
char **my_double_char_cpy(char **dest, char const **src);
char *my_str_dup(char *str);

#endif