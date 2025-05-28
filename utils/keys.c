/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-zu <mpena-zu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 16:20:27 by mpena-zu          #+#    #+#             */
/*   Updated: 2025/05/28 16:29:46 by mpena-zu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	handle_key(int keycode, t_game *game)
{
	if (keycode == 65307)
	{
		mlx_destroy_window(game->mlx, game->win);
		free_map(game->map);
		exit(0);
	}
	else if (keycode == 119)
		move_up(game);
	else if (keycode == 115)
		move_down(game);
	else if (keycode == 97)
		move_left(game);
	else if (keycode == 100)
		move_right(game);
	return (0);
}
