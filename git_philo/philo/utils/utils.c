/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:34:53 by nwesche           #+#    #+#             */
/*   Updated: 2022/06/16 12:24:56 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

int	check_death(t_data *data)
{
	int	dead;

	pthread_mutex_lock(&data->print);
	dead = data->is_dead;
	pthread_mutex_unlock(&data->print);
	return (dead);
}

void	print_death(t_philo *philo, char *s)
{
	philo->data->is_dead = 1;
	printf("%lld	%d %s\n", get_timestamp(philo), philo->id + 1, s);
}

void	safe_print(t_philo *philo, char *s)
{
	pthread_mutex_lock(&philo->data->print);
	if (philo->data->is_dead == 0)
		printf("%lld	%d %s\n", get_timestamp(philo), philo->id + 1, s);
	pthread_mutex_unlock(&philo->data->print);
}
