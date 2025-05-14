NAME		=	so_long
CC			=	cc
FLAGS		=	-Wall -Wextra -Werror
MLX			=	mlx/Makefile.gen
LFT			=	libft/libft.a
INC			=	-I ./inc -I ./libft -I ./mlx
LIB			=	-L ./libft -lft -L ./mlx -lmlx -lXext -lX11 -lm -lbsd
OBJ			=	$(patsubst src%, obj%, $(SRC:.c=.o))
SRC			=	src/so_long.c \
				src/map_isvalid.c \
				src/map_path_check.c \
				src/map_path_utils.c \
				src/die.c \
				src/base_destroy.c \
				src/base_init.c \
				src/draw_map.c \
				src/game_hook.c \
				src/game_init.c \
				src/get_axis.c \
				src/map_init.c \
				src/pixels.c \
				src/player_movement.c \
				src/read_map.c \
				src/render_game.c \
				src/redraw_base.c \
				src/game_destroy.c \
				src/create_base.c \
				gnl/get_next_line.c \
				gnl/get_next_line_utils.c


all:		$(MLX) $(LFT) obj $(NAME)

$(NAME):	$(OBJ)
			$(CC) $(FLAGS) -o $@ $^ $(LIB)

$(MLX):
			@echo " [ .. ] | Compiling minilibx.."
			@make -s -C mlx
			@echo " [ OK ] | Minilibx ready!"

$(LFT):
			@echo " [ .. ] | Compiling libft.."
			@make -s -C libft
			@echo " [ OK ] | Libft ready!"

obj:
			@mkdir -p obj

obj/%.o:	src/%.c
			$(CC) $(FLAGS) $(INC) -o $@ -c $<

clean:
			@make -s $@ -C libft
			@rm -rf $(OBJ) obj
			@echo "object files removed."

fclean:		clean
			@make -s $@ -C libft
			@rm -rf $(NAME)
			@echo "binary file removed."

re:			fclean all

.PHONY:		all clean fclean re
