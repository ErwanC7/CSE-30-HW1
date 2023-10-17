## Makefile
## File description:
## Makefile of HW1
##

NAME		=	fib

SRC		=	main.c	\
			fib.c

OBJ		=	$(SRC:.c=.o)

CFLAGS		+=	-Wall -Wextra

CC		=	gcc

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

debug: CFLAGS += -g3
debug: re

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re debug
