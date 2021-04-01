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

void usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("  ./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("  map  file representing the warehouse map, ");
    my_putstr("containing ‘#’ for walls, ‘P’ for the player, ");
    my_putstr("‘X’ for boxes and ‘O’ for storage locations.\n");
}

int my_sokoban(char **map)
{
    pos_player_t *player = malloc(sizeof(pos_player_t));
    sprite_X_t  *x = malloc(sizeof(sprite_X_t));
    sprite_O_t *o = malloc(sizeof(sprite_X_t));
    map_t *map_info = malloc(sizeof(map_t));

    setup(map_info, player, o, map);
    while (1) {
        getmaxyx(stdscr, map_info->row, map_info->col);
        clear();
        display_map(map_info, map);
        find_X(map, x);
        if (is_loose(map, x) == 1) {
            endwin();
            return (1);
        }
        move_p(map, player);
        refresh();
        if (is_win(map, o) == 0) {
            endwin();
            return (0);
        }
        display_o(map, o);
    }
    endwin();
    return 0;
}

int main (int ac, char **av)
{
    char **map = NULL;
    if (ac != 2)
        return 84;
    if (ac == 2 && av[1] == "-h")
        usage();
    map = create_map(av);
    if (check_map(map) == -1)
        return 84;
    if (my_sokoban(map) == 1)
        return 1;
    else if (my_sokoban(map) == 0)
        return 0;
}