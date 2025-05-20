/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-zu <mpena-zu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 14:55:24 by mpena-zu          #+#    #+#             */
/*   Updated: 2025/05/20 19:30:28 by mpena-zu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_printf("Error: You need a map to start playing\n");
		return (1);
	}
	if (argc == 2)
		game_manager(argv[1]);
	else
	{
		ft_printf("Error: Too many Maps\n");
		return (1);
	}
	return (0);
}
