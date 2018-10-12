/*
** EPITECH PROJECT, 2018
** do_op
** File description:
** do operations
*/

#include "my.h"
#include "my_opp.h"
#include <stdlib.h>

adoop_t *init_op(adoop_t *doop)
{
    doop = malloc(sizeof(doop_t) * 6);
    doop[0].do_op = &my_add;
    doop[1].do_op = &my_sub;
    doop[2].do_op = &my_mul;
    doop[3].do_op = &my_div;
    doop[4].do_op = &my_mod;
    doop[5].do_op = &my_usage;
    return (doop);
}

int advanced_do_op(adoop_t *doop, char **av)
{
    int i = 0;
    char *ope[6] = {"+", "-", "*", "/", "%", NULL};

    while (ope[i] != NULL) {
        if (ope[i][0] == av[2][0])
            doop[i].do_op(av);
        i += 1;
    }
    my_putchar('\n');
    return (0);
}
