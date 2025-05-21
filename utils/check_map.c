/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-zu <mpena-zu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:43:10 by mpena-zu          #+#    #+#             */
/*   Updated: 2025/05/21 14:54:51 by mpena-zu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	count_lines(char *filename)
{
	int		fd;
	int		count;
	char	*line;

	count = 0;
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		perror("Error");
		exit(EXIT_FAILURE);
	}
	line = get_next_line(fd);
	while (line)
	{
		count++;
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (count);
}

char	**read_map(char *filename)
{
	int		fd;
	char	*line;
	char	**map;
	int		i;
	int		lines;

	i = 0;
	lines = count_lines(filename);
	map = malloc(sizeof(char *) * (lines + 1));
	if (!map)
		return (NULL);
	fd = open(filename, O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		map[i] = ft_strtrim(line, "\n");
		free(line);
		i++;
		line = get_next_line(fd);
	}
	map[i] = NULL;
	close(fd);
	return (map);
}

char	*try_open(char *mapname)
{
	int		fd;
	char	*path;

	path = ft_strjoin("maps/", mapname);
	if (!path)
		exit(EXIT_FAILURE);
	fd = open(path, O_RDONLY);
	if (fd < 0)
	{
		perror("Error");
		free(path);
		exit(EXIT_FAILURE);
	}
	close(fd);
	return (path);
}

char	**check_map(char *argv)
{
	int		len;
	char	**map;
	char	*path;

	if (!argv)
	{
		ft_printf("Error: Name Map\n");
		exit(EXIT_FAILURE);
	}
	len = ft_strlen(argv);
	if (len < 5)
	{
		ft_printf("Error: Invalid Name Map\n");
		exit(EXIT_FAILURE);
	}
	if (ft_strncmp(argv + len - 4, ".ber", 4) != 0)
	{
		ft_printf("Error: Invalid Extension\n");
		exit(EXIT_FAILURE);
	}
	path = try_open(argv);
	map = read_map(path);
	free(path);
	return (map);
}
