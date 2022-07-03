##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile lib
##

SRC	=	lib/my/my_putchar.c		\
		lib/my/my_put_nbr.c		\
		lib/my/my_putstr.c		\
		lib/my/my_printf.c		\
		lib/my/my_printf_flags_one.c	\
		lib/my/my_printf_flags_two.c	\

SRC_TESTS	=	tests/tests_my_printf.c	\

OBJ	=	$(SRC:.c=.o)

NAME	= 	libmy.a

NAME_TESTS	=	unit_tests

all: 	$(NAME)

$(NAME): 	$(OBJ)
	ar rc $(NAME) $(OBJ)
	mkdir -p include
	cp lib/my/my_lib.h include
	cp $(NAME) ../../

clean:
	rm -f $(OBJ)
	rm -f *.gcno
	rm -f *.gcov
	rm -f *.gcda

fclean: clean
	rm -f $(NAME)


re:	fclean all

tests_run:	re
	gcc -o $(NAME_TESTS) $(SRC_TESTS) --coverage -lcriterion -L ./ lib/libmy.a
	./$(NAME_TESTS)
