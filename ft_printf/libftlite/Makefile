# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ohearn <ohearn@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/08/18 12:08:43 by ohearn        #+#    #+#                  #
#    Updated: 2022/10/20 17:21:16 by ohearn        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	libftlite.a
CC				=	@gcc
CFLAGS			=	-Wall -Werror -Wextra -c
AR				=	@ar rcs
SRCS			=	fc_putchar.c\
					fc_putstr.c\
					fc_putnbr.c\
					fc_strlen.c\

OBJS			=	$(SRCS:%.c=%.o)

all:			$(NAME)

$(NAME):		$(OBJS)
					$(AR) $(NAME) $(OBJS)
$(OBJS):		$(SRCS)
					$(CC) $(CFLAGS) $(SRCS)

clean:			
				rm -rf $(OBJS)

fclean:			clean
				rm -rf $(NAME)

re:				fclean all

.PHONY:			all, clean, flcean, re