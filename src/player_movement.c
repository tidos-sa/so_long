/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movement.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 21:23:08 by tidos-sa          #+#    #+#             */
/*   Updated: 2025/05/13 21:23:10 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_up(t_base *base, int x, int y)
{
	if (base->game->map[y - 1][x] == 0)
		base->game->player.y -= 1;
}

void	move_down(t_base *base, int x, int y)
{
	if (base->game->map[y + 1][x] == 0)
		base->game->player.y += 1;
}

void	move_left(t_base *base, int x, int y)
{
	if (base->game->map[y][x - 1] == 0)
		base->game->player.x -= 1;
}

void	move_right(t_base *base, int x, int y)
{
	if (base->game->map[y][x + 1] == 0)
		base->game->player.x += 1;
}
