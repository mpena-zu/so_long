/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-zu <mpena-zu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:24:40 by mpena-zu          #+#    #+#             */
/*   Updated: 2025/05/27 15:50:27 by mpena-zu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	render_map(t_game *game)
{
	int	x;
	int	y;

	y = 0;
	while (game->map[y])
	{
		x = 0;
		while (game->map[y][x])
		{
			if (game->map[y][x] == 'P')
				mlx_put_image_to_window(game->mlx, game->win, game->img_player, x * 64, y * 64);
			x++;
		}
		y++;
	}
}

void	time_to_play(char **map)
{
	t_game	*game;
	int		size_x;
	int		size_y;
	int		i;
	
	game = malloc(sizeof(t_game));
	if (!game)
		return ;
	game->mlx = mlx_init();
	if (!game->mlx)
		return ;
	i = 0;
	while (map[i])
		i++;
	size_y = i;
	i = 0;
	while (map[0][i])
		i++;
	size_x = i;
	game->win = mlx_new_window(game->mlx, size_x * 64, size_y * 64, "so_long");
	game->map = map;
	load_images(game);
	render_map(game);
	mlx_loop(game->mlx);
}
