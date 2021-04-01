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

void nbr_o(char **map, sprite_O_t *o)
{
    int n = 0;

    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            if (map[i][j] == 'O') {
                n++;
            }
        }
    }
    o->nbr = n;
}

void find_O(char **map, sprite_O_t *o)
{
    int index = 0;
    int n = 0;

    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            if (map[i][j] == 'O') {
                o->posx[index] = j;
                o->posy[index] = i;
                index++;
            }
        }
    }
    n = index;
    while (n < 100) {
        if (o->posx[n] == 0 && o->posy[n] == 0) {
            o->posx[n] = '\0';
            o->posy[n] = '\0';
        }
        n++;
    }
}
