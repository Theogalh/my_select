##
## Makefile for Makefile in /home/bouill_t/git/mylib/lib/my
## 
## Made by Thomas Bouillon
## Login   <bouill_t@epitech.net>
## 
## Started on  Tue Nov  3 18:17:43 2015 Thomas Bouillon
## Last update Sun Dec 13 03:34:44 2015 Thomas Bouillon
##

SRC	=	my_putstr.c \
		my_putchar.c \
		my_strlen.c \
		my_getnbr.c \
		my_put_in_list.c \
		my_put_nbr.c \
		my_show_list.c \
		my_show_wordtab.c \
		my_sort_params.c \
		my_strcat.c \
		my_strcmp.c \
		my_strcpy.c \
		my_strdup.c \
		my_strcapitalize.c \
		my_str_isalpha.c \
		my_str_islower.c \
		my_str_isprintable.c \
		my_str_isupper.c \
		my_strncpy.c \
		my_strstr.c \
		my_swap.c \
		my_putnbr_base.c \
		my_put.c \
		my_put2.c \
		my_put3.c \
		my_printf.c \
		my_tabfunction.c \
		reverse_my_list.c \
		my_xmalloc.c \
		del_elem_list.c	\

NAME	=	libmy.a

OBJ	=	$(SRC:.c=.o)

HEAD	=	my.h \
		mylist.h \
		my_printf.h \

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	cp $(NAME) ../
	cp $(HEAD) ../../include

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
