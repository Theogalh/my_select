##
## Makefile for Makefile in /home/bouill_t/git/noise_2020
## 
## Made by Thomas Bouillon
## Login   <bouill_t@epitech.net>
## 
## Started on  Tue Nov  3 10:25:36 2015 Thomas Bouillon
## Last update Sun Dec 13 02:24:06 2015 Thomas Bouillon
##

CC	=	gcc

SRC	=	main.c \
		listfonction.c \
		input.c \
		remove.c \

NAME	=	my_select

LIBMAKED=	lib/my/libmy.a

LIBROAD	=	-L./lib/

LIB	=	-lmy

OBJ	=	$(SRC:.c=.o)

LIBMAKE	=	lib/my

INCLUDE =	-c -I./include/

FLAGS	+=	-W -Wextra -ansi -pedantic -g -lncurses

LDFLAGS =

all: $(LIBMAKED) $(NAME)

$(LIBMAKED):
	make -C $(LIBMAKE)

$(NAME):
	$(CC) -c -g $(SRC) $(INCLUDE)
	$(CC) $(OBJ) -o $(NAME) $(FLAGS) $(LIBROAD) $(LIB) $(LDFLAGS)

clean:
	rm -f $(OBJ) && \
	make -C $(LIBMAKE) clean

fclean: clean
	rm -f $(NAME) $$ \
	rm -f $(LIBMAKED)

re: fclean all

.PHONY: all clean fclean re
