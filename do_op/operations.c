/*
** EPITECH PROJECT, 2018
** operations
** File description:
** funcitons
*/

#include "my.h"

void do_plus(char **av)
{
    my_put_nbr(my_getnbr(av[1]) + my_getnbr(av[3]));
}

void do_min(char **av)
{
    my_put_nbr(my_getnbr(av[1]) - my_getnbr(av[3]));
}

void do_mul(char **av)
{
    my_put_nbr(my_getnbr(av[1]) * my_getnbr(av[3]));
}

void do_div(char **av)
{
    my_put_nbr(my_getnbr(av[1]) / my_getnbr(av[3]));
}

void do_mod(char **av)
{
    my_put_nbr(my_getnbr(av[1]) % my_getnbr(av[3]));
}
