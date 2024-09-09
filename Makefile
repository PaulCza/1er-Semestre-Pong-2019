##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## oh bordel
##

SRC	=	main.c			\
		pong.c			\
		check.c			\

TESTS	=	check.c			\
		pong.c			\
		tests/test_101pong.c	\

NAME	= 101pong

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

tests_run:
	gcc -o unit_tests $(TESTS) -lcriterion -lm --coverage
	./unit_tests

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) -lm
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

