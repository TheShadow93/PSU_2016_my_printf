##
## Makefile for  in /home/sumeet.singh/delivery/PSU_2016_my_printf
## 
## Made by Sumeet Singh
## Login   <sumeet.singh@epitech.net>
## 
## Started on  Thu Nov 17 16:12:28 2016 Sumeet Singh
## Last update Sun Feb 19 17:10:26 2017 Sumeet Singh
##

NAME    = libprintf.a

RM	= rm -f

HEADER	= ./include/my_printf.h

CFLAGS	= -W -Wall -ansi -pedantic

OBJS	= $(SRC:.c=.o)

SRC	= function.c		\
	  function2.c		\
	  my_printf.c		\
	  my_tools1.c		\
	  my_tools2.c		\
	  my_put_nbr_hexa.c	\
	  my_put_nbr_octal.c


CC	= gcc

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS)
	$(RM) *~
	$(RM) *#
	$(RM) *a.out

fclean: clean
	$(RM) $(NAME)
	$(RM) ../$(NAME)

re: fclean all

.PHONY: all clean fclean re
