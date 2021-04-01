/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** my_strncpy
*/

#include <stdlib.h>
#include "my.h"

char *my_str_dup(char *str)
{
    int i = 0;
    char *copy = NULL;

    copy = malloc(sizeof(char) * (my_strlen(str) + 1));
    for (i = 0; str[i]; i++)
        copy[i] = str[i];
    copy[i] = NULL;
    return (copy);
}
