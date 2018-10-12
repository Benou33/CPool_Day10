/*
** EPITECH PROJECT, 2018
** header do op advanced
** File description:
** smae
*/

#ifndef MY_OPP_H_
#define MY_OPP_H_

#define ABS(value) (value < 0) ? (-value) : (value)

typedef struct s_advanced_do_op
{
    void (*do_op)(char **);
} adoop_t;

void my_add(char **);
void my_sub(char **);
void my_mul(char **);
void my_div(char **);
void my_mod(char **);
void my_usage(char **);
adoop_t *init_op(adoop_t *);
int advanced_do_op(adoop_t *, char **);

#endif /* MY_OPP_H_ */
