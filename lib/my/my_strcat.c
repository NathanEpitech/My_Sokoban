/*
** EPITECH PROJECT, 2019
** my_strcat.c
** File description:
** my_strcat
*/
#include <stdlib.h>

int my_strlen(char *str);

char *my_strcat(char *dest, char *src)
{
    int len = my_strlen(dest);
    int len_2 = my_strlen(src);
    int i = 0;
    int j = 0;
    char *res = malloc(sizeof(char) * (len + len_2) + 1);

    i = -1;
    j = -1;
    while (dest && dest[++i])
        res[i] = dest[i];
    i -= 1;
    while (src && src[++j])
        res[++i] = src[j];
    res[++i] = 0;
    return res;
}
