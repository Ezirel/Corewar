##
## Makefile for Makefile in /home/tran_1/test/test_shell
## 
## Created by tran_1
## Login   <tran_1@epitech.eu>
## 
## Started on  Sat Mar 29 10:00:19 2014 tran_1
## Last update Sat Mar 29 13:51:56 2014 tran_1
##

CC	= gcc

NAME	= asm

DIR	= srcs/

SRCS	= $(DIR)main.c\
	  $(DIR)my_strfunctions.c\
	  $(DIR)take_name.c\
	  $(DIR)xopen.c\
	  $(DIR)xread.c\
	  $(DIR)struct_init.c\

OBJS	= $(SRCS:.c=.o)

RM	= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
