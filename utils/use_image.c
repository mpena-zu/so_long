/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-zu <mpena-zu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:03:21 by mpena-zu          #+#    #+#             */
/*   Updated: 2025/05/28 17:02:52 by mpena-zu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_floor(t_game *game, int x, int y)
{
	void	*mlx;

	mlx = game->mlx;
	mlx_put_image_to_window(mlx, game->win, game->floor, x * 64, y * 64);
}

void	put_player(t_game *game, int x, int y)
{
	void	*mlx;

	mlx = game->mlx;
	mlx_put_image_to_window(mlx, game->win, game->player, x * 64, y * 64);
}

void	put_coin(t_game *game, int x, int y)
{
	void	*mlx;

	mlx = game->mlx;
	mlx_put_image_to_window(mlx, game->win, game->coin, x * 64, y * 64);
}

void	put_exit(t_game *game, int x, int y)
{
	void	*mlx;

	mlx = game->mlx;
	mlx_put_image_to_window(mlx, game->win, game->exit, x * 64, y * 64);
}

void	put_wall(t_game *game, int x, int y)
{
	void	*mlx;

	mlx = game->mlx;
	mlx_put_image_to_window(mlx, game->win, game->wall, x * 64, y * 64);
}
