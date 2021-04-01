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

void go_down(char **map, pos_player_t *player)
{
    if (map[player->posy + 1][player->posx] == 'X' &&
        map[player->posy + 2][player->posx] != 'X' &&
        map[player->posy + 2][player->posx] != '#'){
        map[player->posy][player->posx] = ' ';
        map[player->posy + 1][player->posx] = 'P';
        map[player->posy + 2][player->posx] = 'X';
        player->posy++;
    }
    else if (map[player->posy + 1][player->posx] != 'X'){
        map[player->posy][player->posx] = ' ';
        map[player->posy + 1][player->posx] = 'P';
        player->posy++;
    }
}

void go_up(char **map, pos_player_t *player)
{
    if (map[player->posy - 1][player->posx] == 'X' &&
        map[player->posy - 2][player->posx] != 'X' &&
        map[player->posy - 2][player->posx] != '#') {
        map[player->posy][player->posx] = ' ';
        map[player->posy - 1][player->posx] = 'P';
        map[player->posy - 2][player->posx] = 'X';
        player->posy--;
    }
    else if (map[player->posy - 1][player->posx] != 'X'){
        map[player->posy][player->posx] = ' ';
        map[player->posy - 1][player->posx] = 'P';
        player->posy--;
    }
}

void go_right(char **map, pos_player_t *player)
{
    if (map[player->posy][player->posx + 1] == 'X' &&
        map[player->posy][player->posx + 2] != 'X' &&
        map[player->posy][player->posx + 2] != '#'){
        map[player->posy][player->posx] = ' ';
        map[player->posy][player->posx + 1] = 'P';
        map[player->posy][player->posx + 2] = 'X';
        player->posx++;
    }
    else if (map[player->posy][player->posx + 1] != 'X'){
        map[player->posy][player->posx] = ' ';
        map[player->posy][player->posx + 1] = 'P';
        player->posx++;
    }
}

void go_left(char **map, pos_player_t *player)
{
    if (map[player->posy][player->posx - 1] == 'X' &&
        map[player->posy][player->posx - 2] != 'X' &&
        map[player->posy][player->posx - 2] != '#'){
        map[player->posy][player->posx] = ' ';
        map[player->posy][player->posx - 1] = 'P';
        map[player->posy][player->posx - 2] = 'X';
        player->posx--;
    }
    else if (map[player->posy][player->posx - 1] != 'X'){
        map[player->posy][player->posx] = ' ';
        map[player->posy][player->posx - 1] = 'P';
        player->posx--;
    }
}

void move_p(char **map, pos_player_t *player)
{
    int key = getch();
    if (key == KEY_DOWN && map[player->posy + 1][player->posx] != '#')
        go_down(map, player);
    if (key == KEY_UP && map[player->posy - 1][player->posx] != '#')
        go_up(map, player);
    if (key == KEY_RIGHT && map[player->posy][player->posx + 1] != '#')
        go_right(map, player);
    if (key == KEY_LEFT && map[player->posy][player->posx - 1] != '#')
        go_left(map, player);

}

