/*
** EPITECH PROJECT, 2020
** my putstr
** File description:
** my putstr
*/

#include <unistd.h>

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        write(1, &str[i], 1);
    return 0;
}
