/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 21:20:57 by tidos-sa          #+#    #+#             */
/*   Updated: 2025/05/13 21:20:58 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	game_init(t_base *base, char *filename)
{
	base->game = (t_game *)malloc(sizeof(t_game));
	if (base->game == 0)
		base_destroy(base, "game_init(): malloc()", errno);
	base->game->map = 0;
	base->game->coll = 0;
	base->game->count_coll = 0;
	base->game->count_exit = 0;
	base->game->count_player = 0;
	base->game->player_move = 0;
	base->game->player_coll = 0;
	base->game->player_up = 0;
	base->game->player_down = 0;
	base->game->player_left = 0;
	base->game->player_right = 0;
	map_init(base, filename);
}
