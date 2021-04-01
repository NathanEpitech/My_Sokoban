
/*
** EPITECH PROJECT, 2020
** my_put_array
** File description:
** my put array
*/
#include "my.h"

int my_put_array(char **arr){
    int i = 0;

    while (arr[i] != NULL){
        my_putstr(arr[i]);
        my_putchar('\n');
        i++;
    }
    return 0;
}
