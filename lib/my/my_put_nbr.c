/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** my_put_nbr
*/
#include <unistd.h>

void my_putchar(char c);

int my_put_nbr(int nb)
{
    if (nb == -2147483648) {
        write(1, "-2147483648", 11);
        return 0;
    }
    if (nb == -1) {
        write(1, "-1", 2);
        return 0;
    }
    if (nb > 9)
        my_put_nbr(nb / 10);
    if (nb < 0) {
        nb *= -1;
        write(1, "-", 1);
        my_put_nbr(nb / 10);
    }
    my_putchar(nb % 10 + '0');
    return 0;
}
