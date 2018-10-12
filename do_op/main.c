/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include "my.h"
#include <unistd.h>

int main(int ac, char **av)
{
    if (error_handling(ac, av) == 0) {
        write(2, "0\n", 2);
        return (84);
    }
    else if (stop_operation(av) == 0)
        return (84);
    else
        return (do_op(av));
}
