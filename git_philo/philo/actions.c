/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 12:10:49 by nwesche           #+#    #+#             */
/*   Updated: 2022/06/16 12:24:48 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	is_eating(t_philo *philo)
{
	philo_left_handed(philo);
	safe_print(philo, "is eating");
	pthread_mutex_lock(&philo->data->time);
	philo->timestamp = get_timestamp(philo);
	pthread_mutex_unlock(&philo->data->time);
	usleep(philo->data->time_to_eat * 1000);
	pthread_mutex_unlock(&philo->data->forks[philo->id]);
	pthread_mutex_unlock(&philo->data->forks[philo->id_right]);
	pthread_mutex_lock(&philo->data->meals);
	philo->data->total_meals--;
	pthread_mutex_unlock(&philo->data->meals);
}

void	is_sleeping_and_thinking(t_philo *philo)
{
	safe_print(philo, "is sleeping");
	usleep(philo->data->time_to_sleep * 1000);
	safe_print(philo, "is thinking");
}

void	keep_eat(t_philo *philo)
{
	int			status;
	int			n;

	status = 0;
	n = philo->data->times_to_eat;
	while (!status)
	{
		is_eating(philo);
		n--;
		if (n && !check_death(philo->data))
			is_sleeping_and_thinking(philo);
		else
			status = 1;
	}
}

void	*eat_cycle(void	*received_t_philo)
{
	t_philo		*philo;

	philo = (t_philo *)received_t_philo;
	if (philo->id % 2)
		usleep(15000);
	if (philo->data->number_of_philosophers == 1)
	{
		while (get_timestamp(philo) < philo->data->time_to_die)
			usleep(500);
	}
	else
		keep_eat(philo);
	return (NULL);
}
