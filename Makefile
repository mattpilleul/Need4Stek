##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC	=	src/main.c			\
		src/const_values.c	\
		src/ia.c			\
		src/left.c			\
		src/right.c			\
		src/init.c			\
		src/get_next_line.c	\
		src/detect_end.c	\
		src/direction.c	\
		src/speed.c		\

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

CFLAGS	= 	-Wall -Wextra -L$(BASIC) -lbasic $(INCLUDE)

INCLUDE =       -I./include/ -I$(BASIC)

BASIC	=	lib/my/

RM	=	@rm -rf

NAME	=	ai

all:		$(NAME)

$(NAME):	$(OBJ)
		@make -C $(BASIC)
		@gcc $(OBJ) $(CFLAGS) -o $(NAME) $(INCLUDE)

clean:
		@$(RM) $(OBJ)
		@make clean -C $(BASIC)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
