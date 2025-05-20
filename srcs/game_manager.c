/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_manager.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-zu <mpena-zu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:27:00 by mpena-zu          #+#    #+#             */
/*   Updated: 2025/05/20 19:29:54 by mpena-zu         ###   ########.fr       */
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
	ft_printf("Vamos bien\n");
}

void	game_manager(char *argv)
{
	char	**map;

	map = check_map(argv);
	is_validate(map);
}
