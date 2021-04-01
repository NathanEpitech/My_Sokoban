##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC	=	src/main.c 	\
		src/setup.c 	\
		src/setup_2.c    \
		src/movements.c 	\
		src/win_loose.c 	\
		src/check_map.c 	\
		src/create_map.c 	\


NAME	=	my_sokoban

OBJ	=	$(SRC:.c=.o)

MAKE	=	make

LIBFLAG	=	-L./lib/my/ -lmy -Wall -Wextra -lc -lncurses

CFLAGS	=	-g3 -I./include

all:	$(OBJ)
	$(MAKE) -C ./lib/my/
	gcc -o $(NAME) $(OBJ) $(LIBFLAG)

clean:
	rm -f $(OBJ)
	make fclean -C ./lib/my

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:all
.PHONY:clean
.PHONY:fclean
.PHONY:re
