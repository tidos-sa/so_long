/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_path_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 22:28:47 by tidos-sa          #+#    #+#             */
/*   Updated: 2025/05/13 23:49:32 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

#define WALL 1
#define VISITED -1

static void	fill(int **map, int w, int h, t_axis pos)
{
	if (pos.x < 0 || pos.y < 0 || pos.x >= w || pos.y >= h)
		return ;
	if (map[pos.y][pos.x] == WALL || map[pos.y][pos.x] == VISITED)
		return ;
	map[pos.y][pos.x] = VISITED;
	fill(map, w, h, (t_axis){pos.x + 1, pos.y});
	fill(map, w, h, (t_axis){pos.x - 1, pos.y});
	fill(map, w, h, (t_axis){pos.x, pos.y + 1});
	fill(map, w, h, (t_axis){pos.x, pos.y - 1});
}

static void	check_coll_exit(t_base *base, int **map)
{
	int		i;
	t_axis	pos;

	i = 0;
	while (i < base->game->count_coll)
	{
		pos = base->game->coll[i];
		if (map[pos.y][pos.x] != VISITED)
		{
			free_map(map, base->game->height);
			base_destroy(base, "Invalid path: a derrota é certa!", 0);
		}
		i++;
	}
	pos = base->game->exit;
	if (map[pos.y][pos.x] != VISITED)
	{
		free_map(map, base->game->height);
		base_destroy(base, "Invalid path: unreachable exit", 0);
	}
}

void	validate_path(t_base *base)
{
	int	**map;

	map = copy_map(base->game->map, base->game->width, base->game->height);
	if (!map)
		base_destroy(base, "Failed to allocate map copy", 0);
	fill(map, base->game->width, base->game->height, base->game->player);
	check_coll_exit(base, map);
	free_map(map, base->game->height);
}
