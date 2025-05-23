/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_manager.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-zu <mpena-zu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:27:00 by mpena-zu          #+#    #+#             */
/*   Updated: 2025/05/23 14:32:33 by mpena-zu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	is_validate(char **map)
{
	if (!is_rectangular(map))
	{
		ft_printf("Error: Map Format is invalid\n");
		exit(EXIT_FAILURE);
	}
	if (!it_has_walls(map))
	{
		ft_printf("Error: Map is not closed\n");
		exit(EXIT_FAILURE);
	}
	if (!has_all_elements(map))
	{
		ft_printf("Error: Map must have 1 Player, 1 Exit and 1 Coin or more\n");
		exit(EXIT_FAILURE);
	}
	if (!has_valid_elements(map))
	{
		ft_printf("Error: Invalid Characters\n");
		exit(EXIT_FAILURE);
	}
	if (!is_winnable(map))
	{
		ft_printf("Error: Map is not winnable, GG FF15\n");
		exit(EXIT_FAILURE);
	}
}

void	game_manager(char *argv)
{
	char	**map;

	map = check_map(argv);
	is_validate(map);
	time_to_play(map);
}
