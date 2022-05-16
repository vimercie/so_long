/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:04:50 by vimercie          #+#    #+#             */
/*   Updated: 2022/05/16 18:37:26 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// enlever <stdio.h> avant de rendre le projet.
#include <stdio.h>
#include "../inc/so_long.h"

int	main(int argc, char *argv[])
{
	char	*map;
	int		map_width;
	int		map_height;

	if (argc != 2)
		return (0);
	map = parsing(argv[1]);
	if (!map)
		return (0);
	if (!error_check(map))
		return (0);
	map_width = get_map_width(map);
	map_height = get_map_height(map);
	mlx_main(map_width, map_height);
	free(map);
	return (0);
}
