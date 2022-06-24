/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_philos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:57:00 by nwesche           #+#    #+#             */
/*   Updated: 2022/06/14 20:24:10 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	init_philosophers(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->number_of_philosophers)
	{
		data->ph[i].timestamp = 0;
		data->ph[i].id = i;
		data->ph[i].id_right = (i + 1) % data->number_of_philosophers;
		data->ph[i].data = data;
		if (pthread_create(&data->ph[i].philosopher, NULL, eat_cycle,
				&data->ph[i]))
			return (print_error("Creating pthread failed."));
		i++;
	}
	return (0);
}

int	join_philosophers(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->number_of_philosophers)
	{
		if (pthread_join(data->ph[i].philosopher, NULL) != 0)
			return (print_error("Threads not joined successfully."));
		i++;
	}
	return (0);
}
