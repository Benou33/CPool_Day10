/*
** EPITECH PROJECT, 2018
** do_op
** File description:
** do operations
*/

#include "my.h"
#include <stdlib.h>

doop_t *init_op(doop_t *doop)
{
    doop = malloc(sizeof(doop_t) * 5);
    doop[0].do_op = &do_plus;
    doop[1].do_op = &do_min;
    doop[2].do_op = &do_mul;
    doop[3].do_op = &do_div;
    doop[4].do_op = &do_mod;
    return (doop);
}

int do_op(char **av)
{
    int i = 0;
    doop_t *doop = NULL;
    char *ope[6] = {"+", "-", "*", "/", "%", NULL};

    doop = init_op(doop);
    while (ope[i] != NULL) {
        if (ope[i][0] == av[2][0])
            doop[i].do_op(av);
        i += 1;
    }
    my_putchar('\n');
    return (0);
}
