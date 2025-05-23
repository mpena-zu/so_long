/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_characters.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-zu <mpena-zu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:07:43 by mpena-zu          #+#    #+#             */
/*   Updated: 2025/05/23 14:09:50 by mpena-zu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	has_all_elements(char **map)
{
	int	i;
	int	j;
	int	player;
	int	exit;
	int	coin;

	i = -1;
	player = 0;
	exit = 0;
	coin = 0;
	while (map[++i])
	{
		j = -1;
		while (map[i][++j])
		{
			if (map[i][j] == 'P')
				player++;
			if (map[i][j] == 'E')
				exit++;
			if (map[i][j] == 'C')
				coin++;
		}
	}
	return (player == 1 && exit == 1 && coin >= 1);
}

int	has_valid_elements(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] != 'P' && map[i][j] != 'C' && map[i][j] != 'E'
				&& map[i][j] != '1' && map[i][j] != '0')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_winnable(char **map)
{
	char	**copy;
	int		px;
	int		py;
	int		result;

	copy = copy_map(map);
	if (!copy)
		return (0);
	find_player(copy, &px, &py);
	flood_fill(copy, px, py);
	result = check_remaining(copy);
	free_map(copy);
	return (result);
}
