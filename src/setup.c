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

void set_window(map_t *map_info)
{
    noecho();
    cbreak();
    map_info->window = initscr();
    curs_set(FALSE);
    keypad(stdscr, TRUE);
    getmaxyx(stdscr, map_info->row, map_info->col);
}

void find_player(char **map, pos_player_t *player)
{
    for (int i = 0; map[i] != '\0'; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            if (map[i][j] == 'P') {
                player->posx = j;
                player->posy = i;
            }
        }
    }

}

void find_X(char **map, sprite_X_t *x)
{
    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            if (map[i][j] == 'X') {
                x->posx = j;
                x->posy = i;
            }
        }
    }
}

void display_o(char **map, sprite_O_t *o)
{
    for (int i = 0; o->posx[i] != NULL; i++) {
        if (map[o->posy[i]][o->posx[i]] != 'X' &&
            map[o->posy[i]][o->posx[i]] != 'P')
            map[o->posy[i]][o->posx[i]] = 'O';
    }
}

void setup(map_t *map_info, pos_player_t *player, sprite_O_t *o, char **map)
{
    set_window(map_info);
    nbr_o(map, o);
    find_O(map, o);
    find_player(map, player);
}