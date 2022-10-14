# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ohearn <ohearn@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/11 16:37:46 by ohearn        #+#    #+#                  #
#    Updated: 2022/10/13 15:28:51 by ohearn        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	push_swap.a
CC				=	@gcc
CFLAGS			=	-Wall -Werror -Wextra
AR				=	@rcs
SRCS			=	\

FT_PRINTF		=	ft_printf/printf.a
OBJECTS			=	$(SRCS:%.c=%.o)

all:			$(NAME)

$(FT_PRINTF):
				make -C ft_printf
$(NAME):		$(OBJECTS) $(FT_PRINTF)
				$(AR) $(NAME) $(OBJECTS)
				ar -q $(FT_PRINTF) $(NAME)
				cp $(FT_PRINTF) $(NAME)

$(OBJECTS)		$(SRCS)
					$(CC) $(CFLAGS) $(SRCS)

clean:			rm -rf $(OBJECTS)
				make clean -C ./ft_printf

fclean:			rm -rf $(OBJECTS)
				rm -rf $(NAME)
				make fclean -C ./ft_printf

re:				fclean all

.PHONY:			all, clean, fclean, re