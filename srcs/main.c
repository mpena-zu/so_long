/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-zu <mpena-zu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 14:55:24 by mpena-zu          #+#    #+#             */
/*   Updated: 2025/05/16 15:19:11 by mpena-zu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc == 1)
	{
		ft_printf("Error: You need a map to start playing\n");
		return(1);
	}
	if (argc == 2)
	{
		ft_printf("Bien\n");
		return (0);
	}
	else
	{
		ft_printf("Error: Too many arguments\n");
		return (1);
	}
}
