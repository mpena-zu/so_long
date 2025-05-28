/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-zu <mpena-zu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:24:40 by mpena-zu          #+#    #+#             */
/*   Updated: 2025/05/28 16:40:06 by mpena-zu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_game_data(t_game *game)
{
	int	x;
	int	y;

	game->coins = 0;
	game->moves = 0;
	y = 0;
	while (game->map[y])
	{
		x = 0;
		while (game->map[y][x])
		{
			if (game->map[y][x] == 'P')
			{
				game->player_x = x;
				game->player_y = y;
			}
			else if (game->map[y][x] == 'C')
				game->coins++;
			x++;
		}
		y++;
	}
}

void	render_map(t_game *game)
{
	int		x;
	int		y;

	y = 0;
	while (game->map[y])
	{
		x = 0;
		while (game->map[y][x])
		{
			if (game->map[y][x] == 'P')
				put_player(game, x, y);
			else if (game->map[y][x] == '1')
				put_wall(game, x, y);
			else if (game->map[y][x] == '0')
				put_floor(game, x, y);
			else if (game->map[y][x] == 'C')
				put_coin(game, x, y);
			else if (game->map[y][x] == 'E')
				put_exit(game, x, y);
			x++;
		}
		y++;
	}
}

void	start_game_loop(t_game *game)
{
	init_game_data(game);
	load_images(game);
	render_map(game);
	mlx_key_hook(game->win, handle_key, game);
	mlx_hook(game->win, 17, 0, close_game, game);
	mlx_loop(game->mlx);
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
	start_game_loop(game);
}
