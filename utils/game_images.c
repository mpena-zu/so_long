/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_images.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-zu <mpena-zu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:03:40 by mpena-zu          #+#    #+#             */
/*   Updated: 2025/05/27 15:58:45 by mpena-zu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load_images(t_game *game)
{
	int	win_width;
	int	win_height;

	game->img_player = mlx_xpm_file_to_image(game->mlx, "images/soldado.xpm", &win_width, &win_height);
}
