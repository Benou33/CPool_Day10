/*
** EPITECH PROJECT, 2018
** operations
** File description:
** funcitons
*/

#include "my.h"
#include "my_opp.h"
#include <limits.h>

void my_add(char **av)
{
    if (my_getnbr(av[1]) <= INT_MAX - my_getnbr(av[3]))
        my_put_nbr(my_getnbr(av[1]) + my_getnbr(av[3]));
    else
        my_putchar('0');
}

void my_sub(char **av)
{
    if (my_getnbr(av[1]) >= INT_MIN + my_getnbr(av[3]))
        my_put_nbr(my_getnbr(av[1]) - my_getnbr(av[3]));
    else
        my_putchar('0');
}

void my_mul(char **av)
{
    if (ABS(my_getnbr(av[1])) <= INT_MAX / ABS(my_getnbr(av[3])))
        my_put_nbr(my_getnbr(av[1]) * my_getnbr(av[3]));
    else
        my_putchar('0');
}

void my_div(char **av)
{
    my_put_nbr(my_getnbr(av[1]) / my_getnbr(av[3]));
}

void my_mod(char **av)
{
    my_put_nbr(my_getnbr(av[1]) % my_getnbr(av[3]));
}
