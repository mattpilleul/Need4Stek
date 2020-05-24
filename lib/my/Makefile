##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC	=	my_str_to_wordtab.c	\

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

CFLAGS	=	-Wall -pedantic -Wextra

RM	=	@rm -rf

NAME	=	libbasic.a

all:		$(NAME)

$(NAME):	$(OBJ)
		@ar rc ../libbasic.a $(OBJ)
		@cp ../$(NAME) .

clean:
		@$(RM) $(OBJ)
		@$(RM) $(NAME)
		@$(RM) ../$(NAME)
