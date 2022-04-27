/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdanyell <rdanyell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:50:34 by rdanyell          #+#    #+#             */
/*   Updated: 2022/04/27 12:52:21 by rdanyell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <pthread.h>
# include <time.h>
# include <errno.h>


typedef	struct			s_data
{
	int				num_of_ph;
	int				d_time;
	int				e_time;
	int				s_time;
	int				num_to_eat;
	int				ph_died;
	// pthread_mutex_t	*mtx_forks;
	// pthread_mutex_t	mtx_death;
	// pthread_mutex_t	mtx_print;
	// pthread_mutex_t	mtx_time;
}				t_data;

int	ft_error(char *str);

#endif