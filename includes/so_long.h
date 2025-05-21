/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-zu <mpena-zu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 14:53:33 by mpena-zu          #+#    #+#             */
/*   Updated: 2025/05/21 14:51:52 by mpena-zu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# define BUFFER_SIZE 1000
# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include "../minilibx-linux/mlx.h"
# include <fcntl.h>

char	**check_map(char *argv);
char	*try_open(char *mapname);
void	game_manager(char *argv);
char	*get_next_line(int fd);
void	is_validate(char **map);
int		is_rectangular(char **map);
int		it_has_walls(char **map);
int		lateral_walls(char **map);
int		has_all_elements(char **map);
int		has_valid_elements(char **map);
int		is_winnable(char **map);

#endif