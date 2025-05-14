/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixels.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 21:21:41 by tidos-sa          #+#    #+#             */
/*   Updated: 2025/05/13 21:58:35 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

unsigned int	mlx_get_pixel(t_img *img, int x, int y)
{
	int				offset;
	unsigned int	color;

	offset = x * (img->bpp / 8) + y * img->size_line;
	color = *(unsigned int *)(img->data + offset);
	return (color);
}

void	mlx_draw_pixel(t_img *mlx_img, int x, int y, int color)
{
	char	*target;

	target = mlx_img->data + (x * mlx_img->bpp / 8 + y * mlx_img->size_line);
	*(unsigned int *)target = color;
}

unsigned int	mlx_rgb_to_int(int o, int r, int g, int b)
{
	return (o << 24 | r << 16 | g << 8 | b);
}
