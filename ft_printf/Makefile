# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ohearn <ohearn@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/07/25 20:34:13 by ohearn        #+#    #+#                  #
#    Updated: 2022/10/20 17:21:52 by ohearn        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	ft_printf.a
CC				=	@gcc
CFLAGS			=	-Wall -Werror -Wextra -c
AR				=	@ar rcs
SRCS			=	ft_printf.c\
					fc_print_hex.c\
					fc_print_dec.c\
					fc_print_str.c\
					fc_print_cha.c\


LIBFTLITE		=	libftlite/libftlite.a
OBJECTS			=	$(SRCS:%.c=%.o)


all:			$(NAME)

$(LIBFTLITE): 
				make -C libftlite
$(NAME):		$(OBJECTS) $(LIBFTLITE)
				$(AR) $(NAME) $(OBJECTS)
				@ar -q $(LIBFTLITE) $(OBJECTS)
				@cp $(LIBFTLITE) $(NAME)
					
$(OBJECTS):		$(SRCS)
					$(CC) $(CFLAGS) $(SRCS)

clean:			
				rm -rf $(OBJECTS)
				@make clean -C ./libftlite

fclean:			clean
				rm -rf $(NAME)
				@make fclean -C ./libftlite

re:				fclean all

.PHONY:			all, clean, fclean, re
