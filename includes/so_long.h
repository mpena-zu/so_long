/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-zu <mpena-zu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 14:53:33 by mpena-zu          #+#    #+#             */
/*   Updated: 2025/05/27 15:42:36 by mpena-zu         ###   ########.fr       */
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
	void	*img_wall;
	void	*img_floor;
	void	*img_player;
	void	*img_collectible;
	void	*img_exit;
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
void		is_validate(char **map);
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

#endif