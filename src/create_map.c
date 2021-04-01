/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include "../include/sokoban.h"

char **create_map(char **av)
{
    int offset = 0;
    int size = 0;
    char **arr = NULL;
    int res = open(av[1], O_RDONLY);
    struct stat st;
    stat (av[1], &st);
    size = st.st_size;
    char *s2 = malloc(sizeof(char) * (size + 1));
    s2[size] = '\0';

    while ((read(res, s2 + offset , size - offset)) > 0) {
        offset = offset + my_strlen(s2);
    }
    arr = conv_str_arr(s2);
    return (arr);
}

char **conv_str_arr(char *str)
{
    int line = nb_line(str);
    char **tab = malloc(sizeof(char *) * (line + 2));
    int nb_carac_line = 0;
    int i = 0;
    int j = 0;

    while (str[i]) {
        nb_carac_line = nb_carac(&str[i]);
        tab[j] = malloc(sizeof(char) * (nb_carac_line + 1));
        tab[j] = my_strncpy(tab[j], &str[i], nb_carac_line);
        i = i + nb_carac_line;
        if (str[i])
            i++;
        j++;
    }
    tab[j] = NULL;
    return (tab);
    free (tab);
}

int map_strlen(char **map)
{
    int x = 0;

    for (int i = 0; map[i] != NULL; i++) {
        if (my_strlen(map[i]) > x)
            x = my_strlen(map[i]);
    }
    return (x);
}

int map_lenght(char **map)
{
    for (int i = 0; map[i] != NULL; i++)
    return i;
}

void display_map(map_t *map_info, char **map)
{
    char *enlarge = "Please enlarge your terminal.";
    int row = 0;
    int col = 0;
    getmaxyx(stdscr, row, col);

    if (row < map_lenght(map) || col < map_strlen(map)) {
        mvprintw(row / 2, col / 2 - my_strlen(enlarge), enlarge);
        return;
    }
    for (int i = 0; map[i] != NULL; i++) {
        mvwprintw(map_info->window, (map_info->row / 2 + i) -
            (map_lenght(map)/ 2), (map_info->col / 2) - (map_strlen(map) / 2),
            "%s", map[i]);
    }
}
