/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdanyell <rdanyell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:06:08 by rdanyell          #+#    #+#             */
/*   Updated: 2022/02/15 15:13:47 by rdanyell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_error(char *error)
{
	ft_printf("Error! %s", error);
	exit(1);
}

int	ft_exit(t_info *info)
{
	// int	i;

	// i = 0;
	// while (vars->map[i])
	// {
	// 	free(vars->map[i]);
	// 	i++;
	// }
	// free(vars->map);
	mlx_destroy_window(info->mlx, info->win);
	exit(0);
}

static void	init_game(t_info *info)
{
	info->mlx = mlx_init();
	info->coins = 0;
	info->x = 0;
	info->y = 0;
	info->moves = 0;
	info->players = 0;
	info->exit = 0;
}

int	main(int argc, char **argv)
{
	t_info	info;

	if (argc != 2)
		ft_error("Incorrect number of arguments\n");
	init_game(&info);
	parse_map(argv[1], &info);
	info.win = mlx_new_window(info.mlx, info.width * SCALE, \
			info.height * SCALE, "so long");
	// int	i = 0; 
	// while (i < info.height)
	// {
	// 	printf("MAP: %s\n", info.map[i]);
	// 	i++;
	// }
	draw_map(&info);
	mlx_hook(info.win, 2, 0, key_hook, &info);
	mlx_hook(info.win, 17, 0, ft_exit, &info);
	mlx_loop(info.mlx);
	return (0);
}
