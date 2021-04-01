/*
** EPITECH PROJECT, 2020
** nb_carac
** File description:
** nb caractere
*/

int nb_carac(char *str){
    int i = 0;
    while (str[i] != '\0' && str[i] != '\n')
        i++;
    return (i);

}
