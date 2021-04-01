/*
** EPITECH PROJECT, 2020
** nb_lines.c
** File description:
** find nb lines
*/

int nb_line(char *str){
    int i = 0;
    int nb = 0;

    while (str[i] != '\0'){
        if (str[i] == '\n')
            nb++;
        i++;
    }
    return (nb);
}