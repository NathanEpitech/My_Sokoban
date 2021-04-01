/*
** EPITECH PROJECT, 2020
** my_atoi
** File description:
** my_atoi
*/

int my_atoi(char *str)
{
    int nbr = 0;

    for (int i = 0; str[i] != '\0'; ++i)
    {
        nbr = nbr * 10 + (str[i] - 48);
    }
    return nbr;
}