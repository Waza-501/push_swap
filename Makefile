# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ohearn <ohearn@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/11 16:37:46 by ohearn        #+#    #+#                  #
#    Updated: 2022/11/29 20:05:00 by ohearn        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	push_swap
CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
SRCS			=	error_handling.c\
					index_utils.c\
					input_check.c\
					input_check_utils.c\
					main.c\
					utils.c\
					stack_creation.c\
					stack_utils.c\
					push.c\
					swap.c\
					rotate.c\

OBJECTS			=	$(SRCS:%.c=%.o)

all:			$(NAME)

$(NAME):		$(OBJECTS)
				$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

clean:			
				rm -rf $(OBJECTS)

fclean:			
				rm -rf $(OBJECTS)
				rm -rf $(NAME)

re:				fclean all

.PHONY:			all, clean, fclean, re