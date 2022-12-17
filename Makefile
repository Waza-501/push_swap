# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ohearn <ohearn@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/11 16:37:46 by ohearn        #+#    #+#                  #
#    Updated: 2022/12/17 21:03:23 by ohearn        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	push_swap
CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror -g
SRCS			=	main.c\
					cost.c\
					optimized_moves.c\
					index_stack.c\
					input_check.c\
					input_check_utils.c\
					utils.c\
					stack_creation.c\
					stack_utils.c\
					position.c\
					sort.c\
					push.c\
					swap.c\
					rotate.c\
					reverse_rotate.c\

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