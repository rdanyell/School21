/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdanyell <rdanyell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:52:54 by rdanyell          #+#    #+#             */
/*   Updated: 2022/04/27 12:53:36 by rdanyell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	ft_atoi(const char *str)
{
	int						sign;
	unsigned long long int	nb;
	int						i;

	sign = 1;
	nb = 0;
	i = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if ((nb > 9223372036854775807) && (sign == 1))
			return (-1);
		if ((nb > 9223372036854775807) && (sign == -1))
			return (0);
		nb = (nb * 10) + (str[i++] - '0');
	}
	return ((int)(nb * sign));
}
