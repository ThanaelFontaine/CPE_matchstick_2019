##
## EPITECH PROJECT, 2019
## makefile
## File description:
## ######
##

SRC		=	mouve_out_stick.c		\
			win_or_loose.c			\
			ia.c					\
			update_match_stick.c	\
			map_global.c			\
			documentation.c			\
			matchstick.c			\

NAME	=	matchstick

LIBRARY = 	make -C lib/my

CFLAGS	=	-W -Wall -Wextra -g3

all:		$(NAME)

$(NAME):
			$(LIBRARY)
			gcc -o $(NAME) $(CFLAGS) $(SRC) -L ./lib/my/ -lmy
clean:
			$(LIBRARY) clean

fclean:		clean
			rm -f $(NAME)
			$(LIBRARY) fclean

re:			fclean all