/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:36:26 by nwesche           #+#    #+#             */
/*   Updated: 2022/06/13 14:40:32 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	check_non_int_args(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_meals(t_data *data)
{
	int	meal_count;

	pthread_mutex_lock(&data->meals);
	meal_count = data->total_meals;
	pthread_mutex_unlock(&data->meals);
	return (meal_count);
}

void	checker_for_death(t_data *data)
{
	int	i;

	i = 0;
	while (!check_death(data) && check_meals(data))
	{
		while (i < data->number_of_philosophers)
		{
			if (time_since_meal(&data->ph[i]) > data->time_to_die)
			{
				pthread_mutex_lock(&data->print);
				print_death(&data->ph[i], "dies");
				pthread_mutex_unlock(&data->print);
				break ;
			}
			i++;
		}
		i = 0;
	}
}
