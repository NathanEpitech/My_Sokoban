/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** my_str_to_word_array
*/

#include "my.h"
#include <stdlib.h>
#include <stdio.h>

char **my_str_to_word_array(char *str, char c)
{
    int i = 0, j = 0, x = 0;
    char *res = malloc(sizeof(char *) * (my_strlen(str)));
    char **arr = malloc(sizeof(char *) * (my_strlen(str) + 1));

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != c || str[i] != '\n' || str[i] != '\t') {
            res[j] = str[i];
            j++;
        }
        if (str[i] == c || str[i] == '\n' ||
                str[i] == '\t' || str[i + 1] == '\0') {
            res[j - 1] = '\0';
            j = 0;
            arr[x] = my_str_dup(res);
            x++;
        }
    }
    free(res);
    arr[x] = NULL;
    return arr;
}