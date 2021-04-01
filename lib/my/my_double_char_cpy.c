/*
** EPITECH PROJECT, 2020
** my_strcpy.c
** File description:
** my_strcpy
*/

char *my_strcpy(char *dest, char const *src)
{
    int i;

    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}

char **my_double_char_cpy(char **dest, char const **src)
{
    int i = 0;

    for (i = 0; src[i] != '\0'; i++)
        dest[i] = my_strcpy(dest[i], src[i]);
    dest[i] = '\0';
    return (dest);
}
