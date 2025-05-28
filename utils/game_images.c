/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_images.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-zu <mpena-zu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:03:40 by mpena-zu          #+#    #+#             */
/*   Updated: 2025/05/28 17:02:33 by mpena-zu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load_images(t_game *game)
{
	int		width;
	int		height;
	void	*mlx;

	mlx = game->mlx;
	game->player = mlx_xpm_file_to_image(
			mlx, "images/floor_tomate.xpm", &width, &height);
	game->wall = mlx_xpm_file_to_image(
			mlx, "images/wall.xpm", &width, &height);
	game->floor = mlx_xpm_file_to_image(
			mlx, "images/floor.xpm", &width, &height);
	game->coin = mlx_xpm_file_to_image(
			mlx, "images/coin.xpm", &width, &height);
	game->exit = mlx_xpm_file_to_image(
			mlx, "images/exit.xpm", &width, &height);
}
