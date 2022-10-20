# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ohearn <ohearn@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/11 16:37:46 by ohearn        #+#    #+#                  #
#    Updated: 2022/10/20 17:21:11 by ohearn        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	push_swap
CC				=	gcc
CFLAGS			=	-Wall -Wextra
SRCS			=	input_check.c\
					input_check_utils.c\
					error_handling.c\
					main.c\

FT_PRINTF		=	ft_printf/ft_printf.a
OBJECTS			=	$(SRCS:%.c=%.o)

all:			$(NAME)

$(FT_PRINTF):
				make -C ft_printf
$(NAME):		$(OBJECTS) $(FT_PRINTF)
				$(CC) $(CFLAGS) $(OBJECTS) -g -o $(NAME) $(FT_PRINTF)

clean:			
				rm -rf $(OBJECTS)
				@make clean -C ./ft_printf

fclean:			
				rm -rf $(OBJECTS)
				rm -rf $(NAME)
				@make fclean -C ./ft_printf

re:				fclean all

.PHONY:			all, clean, fclean, re