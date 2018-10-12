/*
** EPITECH PROJECT, 2018
** main 
** File description:
** main
*/

#include "my.h"
#include <stdio.h>

int main(int ac, char **av)
{
    char **tab = my_str_to_word_array("Bonjour les copains, comment ca va aujourd'hui ?");

    printf("%d\n", my_advanced_sort_word_array(tab, &my_strcmp));
    for (int i = 0; tab[i] != NULL; i ++)
        printf("%s\n", tab[i]);
}
