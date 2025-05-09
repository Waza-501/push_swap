NAME			:=	push_swap
CC				:=	cc
CFLAGS			:=	-Wall -Werror -Wextra
MUTE			:=	--no-print-directory

LIBFT_FOLDER 	:= libraries/libft/
LIBFT_NAME 		:= libft.a
LIBFT 			:= $(addprefix $(LIBFT_FOLDER), $(LIBFT_NAME))

SOURCES_DIR		:=	sources/
SOURCES			:=	execute_moves.c\
					find_best_rtype.c\
					find_target_utils.c\
					find_target.c\
					free_and_exit.c\
					lists.c\
					parse_input.c\
					parse_quotes.c\
					push_swap.c\
					sort_algorithm.c\
					sort_push.c\
					sort_rotate.c\
					sort_rrotate.c\
					sort_swap.c\
					utilities.c\

OBJECTS_DIR		:=	objects/
OBJECTS			:= $(addprefix $(OBJECTS_DIR), $(SOURCES:.c=.o))
INCLUDE_DIR		:=	includes/
HEADERS			:=	-I $(INCLUDE_DIR)

NO_COLOR = \033[0;39m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
CYAN = \033[0;96m

all:		$(NAME)
			$(info Finished compiling push_swap)

$(NAME):	$(OBJECTS) $(LIBFT)
				$(CC) $(CFLAGS) -o $@ $^ $(HEADERS)

$(LIBFT):	
			@make $(MUTE) -C $(LIBFT_FOLDER)

$(OBJECTS_DIR)%.o:	$(SOURCES_DIR)%.c
					@mkdir -p $(dir $@)
					$(CC) $(CFLAGS) $(HEADERS) -c -o $@ $<

clean:
			@rm -rf $(OBJECTS)
			@make $(MUTE) -C $(LIBFT_FOLDER) clean

fclean:		clean
			@rm -rf $(NAME)
			@make $(MUTE) -C $(LIBFT_FOLDER) fclean
			@if [ -d "$(OBJECTS_DIR)" ]; then rm -drf $(OBJECTS_DIR); fi
			@echo Cleaned up all created files.

re:	fclean all

.PHONY:		all, clean, fclean, re