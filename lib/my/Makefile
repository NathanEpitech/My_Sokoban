##
## EPITECH PROJECT, 2020
## makefile
## File description:
## .
##

SRC	=	my_putchar.c	\
		my_strncpy.c    \
		my_putstr.c	\
		my_put_double_char.c    \
		my_double_char_cpy.c    \
		my_str_to_word_array.c   \
		my_str_dup.c   \
		my_strlen.c	\
		my_strcat.c   \
		my_strcmp.c   \
		my_strncpy.c	\
		my_put_nbr.c      \
		my_put_array.c  \
		nb_carac.c      \
		my_atoi.c    \
		nb_line.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

NAMEMY	=	my.h

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp $(NAMEMY)	../../include/
clean:
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re: fclean all
