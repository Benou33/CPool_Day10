##
## EPITECH PROJECT, 2018
## makefile
## File description:
## makefile
##

SRC	=	error_handling.c	\
		operations.c		\
		do_op.c			\
		main.c

LIB	=	-L ../lib/my -lmy

INC	=	-I ../include -I ../lib/my/include

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -g $(INC)

NAME	=	my_advanced_do-op

all:	$(OBJ)
	@make -sC ../lib/my
	@gcc -o $(NAME) $(OBJ) $(LIB) $(CFLAGS) $(INC)

clean:
	@make -sC ../lib/my clean
	@rm -f $(OBJ)

fclean:	clean
	@make -sC ../lib/my fclean
	@rm -f $(NAME)

re:	fclean all
