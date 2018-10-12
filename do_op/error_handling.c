/*
** EPITECH PROJECT, 2018
** error handling
** File description:
** deal with it
*/

#include "my.h"
#include <unistd.h>

int is_operator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
        return (1);
    return (0);
}

int error_handling(int ac, char **av)
{
    if (ac != 4)
        return (0);
    if (is_operator(av[2][0]) == 0)
        return (0);
    return (1);
}

int stop_operation(char **av)
{
    if (my_getnbr(av[3]) == 0) {
        if (av[2][0] == '/') {
            write(2, "Stop: division by zero\n", 23);
            return (0);
        }
        else if (av[2][0] == '%') {
            write(2, "Stop: modulo by zero\n", 21);
            return (0);
        }
    }
    return (1);
}
