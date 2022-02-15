/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdanyell <rdanyell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:38:00 by rdanyell          #+#    #+#             */
/*   Updated: 2022/02/15 16:39:46 by rdanyell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	choose_player_position(t_info *info)
{
	int	i;
	int	j;
	int	players;

	i = 0;
	players = 0;
	while (i < info->height)
	{
		j = 0;
		while (j < info-> width)
		{
			if (info->map[i][j] == 'P' && players > 0)
				info->map[i][j] = '0';
			if (info->map[i][j] == 'P' && players == 0)
				players++;
			j++;
		}
		i++;
	}
}

void	ft_map_error(t_info *info, int unknown)
{
	if (info->exit < 1)
		ft_error("There is no exit\n");
	if (info->players < 1)
		ft_error("There is no player position\n");
	if (info->players > 1)
		choose_player_position(info);
	if (info->coins < 1)
		ft_error("There are no collectibles\n");
	if (unknown > 0)
		ft_error("There are unknown characters\n");
}

void	check_chars(t_info *info)
{
	int	unknown;
	int	i;
	int	j;

	i = 0;
	unknown = 0;
	while (i < info->height)
	{
		j = 0;
		while (j < info-> width)
		{
			if (info->map[i][j] == 'E')
				info->exit++;
			else if (info->map[i][j] == 'P')
				info->players++;
			else if (info->map[i][j] == 'C')
				info->coins++;
			else if (info->map[i][j] != '1' && info->map[i][j] != '0')
				unknown++;
			j++;
		}
		i++;
	}
	ft_map_error(info, unknown);
}

void	ft_is_wall(t_info *info, int i)
{
	int	j;

	j = 0;
	while (info->map[i][j])
	{
		if (info->map[i][j] != '1')
			ft_error("The map is not surrounded by walls!\n");
		j++;
	}
} 

void	check_walls(t_info *info)
{
	int	i;

	i = 0;
	while (i < info->height)
	{
		if (i == 0 || i == info->height - 1)
			ft_is_wall(info, i); 
		else if(info->map[i][0] != '1' || info->map[i][info->width - 1] != '1')
			ft_error("The map is not surrounded by walls!\n");
		i++;
	}
}