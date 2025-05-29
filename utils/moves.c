/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-zu <mpena-zu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 16:29:19 by mpena-zu          #+#    #+#             */
/*   Updated: 2025/05/29 17:30:44 by mpena-zu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_up(t_game *game)
{
	int	x;
	int	y;

	x = game->player_x;
	y = game->player_y - 1;
	if (game->map[y][x] != '1')
	{
		if (game->map[y][x] == 'C')
			game->coins--;
		if (game->map[y][x] == 'E' && game->coins == 0)
			win_game(game);
		else if (game->map[y][x] == 'E')
			return ;
		game->map[game->player_y][game->player_x] = '0';
		game->map[y][x] = 'P';
		game->player_y = y;
		game->moves++;
		ft_printf("Moves: %d\n", game->moves);
		render_map(game);
	}
}

void	move_down(t_game *game)
{
	int	x;
	int	y;

	x = game->player_x;
	y = game->player_y + 1;
	if (game->map[y][x] != '1')
	{
		if (game->map[y][x] == 'C')
			game->coins--;
		if (game->map[y][x] == 'E' && game->coins == 0)
			win_game(game);
		else if (game->map[y][x] == 'E')
			return ;
		game->map[game->player_y][game->player_x] = '0';
		game->map[y][x] = 'P';
		game->player_y = y;
		game->moves++;
		ft_printf("Moves: %d\n", game->moves);
		render_map(game);
	}
}

void	move_left(t_game *game)
{
	int	x;
	int	y;

	x = game->player_x - 1;
	y = game->player_y;
	if (game->map[y][x] != '1')
	{
		if (game->map[y][x] == 'C')
			game->coins--;
		if (game->map[y][x] == 'E' && game->coins == 0)
			win_game(game);
		else if (game->map[y][x] == 'E')
			return ;
		game->map[game->player_y][game->player_x] = '0';
		game->map[y][x] = 'P';
		game->player_x = x;
		game->moves++;
		ft_printf("Moves: %d\n", game->moves);
		render_map(game);
	}
}

void	move_right(t_game *game)
{
	int	x;
	int	y;

	x = game->player_x + 1;
	y = game->player_y;
	if (game->map[y][x] != '1')
	{
		if (game->map[y][x] == 'C')
			game->coins--;
		if (game->map[y][x] == 'E' && game->coins == 0)
			win_game(game);
		else if (game->map[y][x] == 'E')
			return ;
		game->map[game->player_y][game->player_x] = '0';
		game->map[y][x] = 'P';
		game->player_x = x;
		game->moves++;
		ft_printf("Moves: %d\n", game->moves);
		render_map(game);
	}
}
