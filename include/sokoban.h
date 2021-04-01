/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** .
*/

#include <stddef.h>
#include <ncurses.h>
#ifndef SOKOBAN_H
#define SOKOBAN_H

typedef struct pos_player_s {
    int posx;
    int posy;
}pos_player_t;

typedef struct sprite_X_s {
    int nbr;
    int posx;
    int posy;
}sprite_X_t;

typedef struct sprite_O_s {
    int posx[100];
    int posy[100];
    int nbr;
    struct sprite_O *next;

}sprite_O_t;
typedef struct map_s {
    int row;
    int col;
    pos_player_t *player;
    sprite_O_t **O;
    sprite_X_t *x;
    char **arr;
    WINDOW *window;
}map_t;


char **create_map(char **av);
void display_map(map_t *map_info, char **map);
int my_sokoban(char **map);
void setup(map_t *map_info, pos_player_t *player, sprite_O_t *O, char **map);
int check_lose_win(char **map, sprite_X_t *X, sprite_O_t *O);
char **conv_str_arr(char *str);
void display_o(char **map, sprite_O_t *O);
void find_O(char **map, sprite_O_t *O);
void nbr_o(char **map, sprite_O_t *O);
int check_map(char **map);
void move_p(char **map, pos_player_t *player);
void go_right(char **map, pos_player_t *player);
void go_up(char **map, pos_player_t *player);
void go_down(char **map, pos_player_t *player);
void go_left(char **map, pos_player_t *player);
void find_X(char **map, sprite_X_t *X);
int is_win(char **map, sprite_O_t *O);
int is_loose(char **map, sprite_X_t *X);

#endif /*SOKOBAN_H*/