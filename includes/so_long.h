/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-zu <mpena-zu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 14:53:33 by mpena-zu          #+#    #+#             */
/*   Updated: 2025/05/30 13:22:27 by mpena-zu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# define BUFFER_SIZE 1000
# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include "../minilibx-linux/mlx.h"
# include <fcntl.h>

typedef struct s_game
{
	void	*mlx;
	void	*win;
	void	*wall;
	void	*floor;
	void	*player;
	void	*coin;
	void	*exit;
	void	*victory;
	char	**map;
	int		player_x;
	int		player_y;
	int		moves;
	int		coins;
}			t_game;

char		**check_map(char *argv);
char		*try_open(char *mapname);
void		game_manager(char *argv);
char		*get_next_line(int fd);
int			is_validate(char **map);
int			is_rectangular(char **map);
int			it_has_walls(char **map);
int			lateral_walls(char **map);
int			has_all_elements(char **map);
int			has_valid_elements(char **map);
int			is_winnable(char **map);
void		time_to_play(char **map);
void		free_map(char **map);
char		**copy_map(char **map);
void		find_player(char **map, int *px, int *py);
int			check_remaining(char **map);
void		flood_fill(char **map, int x, int y);
void		time_to_play(char **map);
void		render_map(t_game *game);
void		load_images(t_game *game);
void		put_wall(t_game *game, int x, int y);
void		put_exit(t_game *game, int x, int y);
void		put_floor(t_game *game, int x, int y);
void		put_player(t_game *game, int x, int y);
void		put_coin(t_game *game, int x, int y);
int			handle_key(int keycode, t_game *game);
int			close_game(t_game *game);
void		move_up(t_game *game);
void		move_down(t_game *game);
void		move_left(t_game *game);
void		move_right(t_game *game);
void		init_game_data(t_game *game);
void		start_game_loop(t_game *game);
void		free_images(t_game *game);
void		win_game(t_game *game);

#endif