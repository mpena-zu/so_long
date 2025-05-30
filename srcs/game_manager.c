/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_manager.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-zu <mpena-zu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:27:00 by mpena-zu          #+#    #+#             */
/*   Updated: 2025/05/30 13:27:08 by mpena-zu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_validate(char **map)
{
	if (!is_rectangular(map))
		return (0);
	if (!it_has_walls(map))
	{
		ft_printf("Error: Map is not closed\n");
		return (0);
	}
	if (!has_all_elements(map))
	{
		ft_printf("Error: Map must have 1 Player, 1 Exit and 1 Coin or more\n");
		return (0);
	}
	if (!has_valid_elements(map))
	{
		ft_printf("Error: Invalid Characters\n");
		return (0);
	}
	if (!is_winnable(map))
	{
		ft_printf("Error: Map is not winnable, GG FF15\n");
		return (0);
	}
	return (1);
}

void	game_manager(char *argv)
{
	char	**map;

	map = check_map(argv);
	if (!is_validate(map))
	{
		free_map(map);
		exit(EXIT_FAILURE);
	}
	time_to_play(map);
}
