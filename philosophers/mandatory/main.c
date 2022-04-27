/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdanyell <rdanyell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:50:26 by rdanyell          #+#    #+#             */
/*   Updated: 2022/04/27 12:54:29 by rdanyell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	main(int argc, char *argv[])
{
	if (argc != 5 && argc != 6)
		return (ft_error("Wrong number of arguments"));
	parse_argc(int argc, char *argv[]);
	return (0);
}
