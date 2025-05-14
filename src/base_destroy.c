/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_destroy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 21:15:20 by tidos-sa          #+#    #+#             */
/*   Updated: 2025/05/13 22:01:29 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	destroy_images(t_base *base)
{
	if (base->ground)
		mlx_destroy_image(base->mlx, base->ground);
	if (base->wall)
		mlx_destroy_image(base->mlx, base->wall);
	if (base->coll)
		mlx_destroy_image(base->mlx, base->coll);
	if (base->exit)
		mlx_destroy_image(base->mlx, base->exit);
	if (base->player)
		mlx_destroy_image(base->mlx, base->player);
	if (base->mlx_img)
		mlx_destroy_image(base->mlx, base->mlx_img);
	if (base->mlx_win)
		mlx_destroy_window(base->mlx, base->mlx_win);
}

void	base_destroy(t_base *base, char *errmsg, int errnum)
{
	if (base)
	{
		destroy_images(base);
		if (base->mlx)
		{
			mlx_destroy_display(base->mlx);
			free(base->mlx);
		}
		if (base->game)
			game_destroy(base->game);
		free(base);
	}
	die(errmsg, errnum);
}
