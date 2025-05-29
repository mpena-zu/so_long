/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-zu <mpena-zu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:58:46 by mpena-zu          #+#    #+#             */
/*   Updated: 2025/05/29 17:03:23 by mpena-zu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_rectangular(char **map)
{
	size_t	i;
	size_t	len;

	if (!map || !map[0])
		return (0);
	i = 1;
	len = ft_strlen(map[0]);
	while (map[i])
	{
		if (ft_strlen(map[i]) != len)
			return (0);
		i++;
	}
	return (1);
}

int	lateral_walls(char **map)
{
	int	i;
	int	len;

	i = 0;
	while (map[i])
	{
		len = ft_strlen(map[i]);
		if (map[i][0] != '1' || map[i][len - 1] != '1')
			return (0);
		i++;
	}
	return (1);
}

int	it_has_walls(char **map)
{
	int	first;
	int	last;

	first = 0;
	while (map[0][first])
	{
		if (map[0][first] != '1')
			return (0);
		first++;
	}
	last = 0;
	while (map[last])
		last++;
	last = last - 1;
	first = 0;
	while (map[last][first])
	{
		if (map[last][first] != '1')
			return (0);
		first++;
	}
	if (!lateral_walls(map))
		return (0);
	return (1);
}
