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

int is_loose(char **map, sprite_X_t *x)
{
    if (map[x->posy + 1][x->posx] == '#' && map[x->posy][x->posx + 1] == '#')
        return (1);
    if (map[x->posy - 1][x->posx] == '#' && map[x->posy][x->posx + 1] == '#')
        return (1);
    if (map[x->posy + 1][x->posx] == '#' && map[x->posy][x->posx - 1] == '#')
        return (1);
    if (map[x->posy - 1][x->posx] == '#' && map[x->posy][x->posx - 1] == '#')
        return (1);
}

int is_win(char **map, sprite_O_t *o)
{
    int res = 0;

    for (int i = 0; o->posx[i] != '\0'; i++) {
        if (map[o->posy[i]][o->posx[i]] == 'X')
            res++;
    }
    if (res == o->nbr)
        return 0;
    else
        return 1;
}