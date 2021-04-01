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

int is_map_valid(char **map)
{
    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            if (map [i][j] != 'O' && map [i][j] != 'X' &&
                map [i][j] != '#' && map [i][j] != 'P' && map [i][j] != ' ')
                return -1;
        }
    }
    return 0;
}

int is_param_valid(char **map)
{
    int x = 0;
    int p = 0;
    int o = 0;

    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            if (map[i][j] == 'P')
                p++;
            if (map[i][j] == 'O')
                o++;
            if (map[i][j] == 'X')
                x++;
        }
    }
    if (x == 0 && p == 0 && o == 0)
        return -1;
    if (p > 1 || x != o)
        return -1;
    return 0;
}

int check_map(char **map)
{
    if (is_map_valid(map) == -1)
        return -1;
    if (is_param_valid(map) == -1)
        return -1;
    else
        return 0;
}