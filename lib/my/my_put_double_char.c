/*
** EPITECH PROJECT, 2020
** my_putchar
** File description:
** my_putchar
*/

#include <unistd.h>
#include "my.h"

void my_put_double_char(char **str)
{
    for (int i = 0; str[i] != NULL; i++)
    {
        my_putstr(str[i]);
        my_putchar('\n');
    }
}