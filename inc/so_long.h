/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:35:43 by gamarcha          #+#    #+#             */
/*   Updated: 2025/05/13 22:41:13 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "libft.h"
# include <errno.h>
# include <fcntl.h>
# include <mlx.h>
# include <mlx_int.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_axis
{
	int			x;
	int			y;
}				t_axis;

typedef struct s_game
{
	int			**map;
	int			height;
	int			width;
	t_axis		player;
	int			player_up;
	int			player_down;
	int			player_left;
	int			player_right;
	int			player_move;
	int			player_coll;
	t_axis		exit;
	t_axis		*coll;
	int			count_coll;
	int			count_exit;
	int			count_player;
}				t_game;

typedef struct s_base
{
	void		*mlx;
	void		*mlx_win;
	t_img		*mlx_img;
	t_game		*game;
	t_img		*player;
	t_img		*exit;
	t_img		*coll;
	t_img		*wall;
	t_img		*ground;
}				t_base;

int				ft_strcmp(const char *s1, const char *s2);
void			map_init(t_base *base, char *filename);
t_base			*base_init(char *filename);
void			game_init(t_base *base, char *filename);
void			read_map(t_base *base, char *file);
void			get_axis(t_base *base, char *file, int k, int *obj);
void			draw_map(t_base *base, char *file);
void			render_game(t_base *base);
void			base_destroy(t_base *base, char *errmsg, int errnum);
void			game_destroy(t_game *game);
void			create_base(t_base *base);
unsigned int	mlx_rgb_to_int(int o, int r, int g, int b);
void			mlx_draw_pixel(t_img *mlx_img, int x, int y, int color);
unsigned int	mlx_get_pixel(t_img *img, int x, int y);
void			map_isvalid(t_base *base, char *file);
void			die(char *errmsg, int errnum);
int				isber(char *file);
void			map_init(t_base *base, char *filename);
void			validate_path(t_base *base);
int				alloc_map_row(int **copy, int *src_row, int width, int i);
int				**copy_map(int **map, int width, int height);
void			free_map(int **map, int height);

int				alloc_map_row(int **copy, int *src_row, int width, int i);
int				key_press(int key_code, t_base *base);
int				key_release(int key_code, t_base *base);
int				destroy_game(int key_code, t_base *base);

void			move_up(t_base *base, int x, int y);
void			move_down(t_base *base, int x, int y);
void			move_left(t_base *base, int x, int y);
void			move_right(t_base *base, int x, int y);

void			redraw_base(t_base *base);

#endif
