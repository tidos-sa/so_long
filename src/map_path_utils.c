/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_path_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 22:28:42 by tidos-sa          #+#    #+#             */
/*   Updated: 2025/05/13 22:29:09 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdlib.h>

#define WALL 1
#define VISITED -1

int	alloc_map_row(int **copy, int *src_row, int width, int i)
{
	int	j;

	copy[i] = malloc(sizeof(int) * width);
	if (!copy[i])
	{
		while (--i >= 0)
			free(copy[i]);
		free(copy);
		return (0);
	}
	j = 0;
	while (j < width)
	{
		copy[i][j] = src_row[j];
		j++;
	}
	return (1);
}

int	**copy_map(int **map, int width, int height)
{
	int	**copy;
	int	i;

	copy = malloc(sizeof(int *) * height);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < height)
	{
		if (!alloc_map_row(copy, map[i], width, i))
			return (NULL);
		i++;
	}
	return (copy);
}

void	free_map(int **map, int height)
{
	int	i;

	i = 0;
	while (i < height)
	{
		free(map[i]);
		i++;
	}
	free(map);
}
