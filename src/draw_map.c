/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 21:18:49 by tidos-sa          #+#    #+#             */
/*   Updated: 2025/05/13 21:18:50 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	draw_map(t_base *base, char *file)
{
	int	i;
	int	j;
	int	k;
	int	obj;

	j = 0;
	k = 0;
	obj = 0;
	while (j < base->game->height)
	{
		base->game->map[j] = (int *)malloc(sizeof(int) * base->game->width);
		i = 0;
		while (i < base->game->width)
		{
			get_axis(base, file, k, &obj);
			base->game->map[j][i] = file[k] - 48;
			k++;
			i++;
		}
		k++;
		j++;
	}
}
