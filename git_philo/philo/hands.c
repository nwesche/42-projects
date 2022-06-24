/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hands.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 12:35:35 by nwesche           #+#    #+#             */
/*   Updated: 2022/06/07 18:21:05 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	philo_left_handed(t_philo *philo)
{
	pthread_mutex_lock(&philo->data->forks[philo->id]);
	safe_print(philo, "has taken a fork");
	pthread_mutex_lock(&philo->data->forks[philo->id_right]);
	safe_print(philo, "has taken a fork");
}

void	philo_right_handed(t_philo *philo)
{
	pthread_mutex_lock(&philo->data->forks[philo->id_right]);
	safe_print(philo, "has taken a fork");
	pthread_mutex_lock(&philo->data->forks[philo->id]);
	safe_print(philo, "has taken a fork");
}
