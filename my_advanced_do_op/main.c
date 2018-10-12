/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include "my.h"
#include "my_opp.h"
#include <unistd.h>

int main(int ac, char **av)
{
    adoop_t *doop = NULL;

    doop = init_op(doop);
    if (error_handling(ac, av) == 0) {
        doop[5].do_op(av);
        return (84);
    }
    else if (stop_operation(av) == 0)
        return (84);
    else
        return (advanced_do_op(doop, av));
}
