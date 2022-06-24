/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:57:00 by nwesche           #+#    #+#             */
/*   Updated: 2022/06/20 12:18:30 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	init_more_data(t_data *data, int argc, char **argv)
{
	if (argc == 6)
		data->times_to_eat = ft_atoi(argv[5]);
	else
		data->times_to_eat = -1;
	data->total_meals = data->times_to_eat * data->number_of_philosophers;
	init_start_time(data);
}

int	error_check_data(t_data *data, int argc, char *argv[])
{
	if (argc < 5 || argc > 6)
		return (print_guidance());
	if (check_non_int_args(argc, argv) == 1)
		return (print_error("Contains non-integer argument(s)."));
	data->number_of_philosophers = ft_atoi(argv[1]);
	if (data->number_of_philosophers == 0)
		return (print_error("Please enter at least 1 philosopher."));
	if (data->number_of_philosophers > 200)
		return (print_error("Please enter max 200 philosophers."));
	data->time_to_die = ft_atoi(argv[2]);
	if (data->time_to_die < 60)
		return (print_error("Time_to_die must be at least 60 msec."));
	data->is_dead = 0;
	data->time_to_eat = ft_atoi(argv[3]);
	if (data->time_to_eat < 60)
		return (print_error("Time_to_eat must be at least 60 msec."));
	data->time_to_sleep = ft_atoi(argv[4]);
	if (data->time_to_sleep < 60)
		return (print_error("Time_to_sleep must be at least 60 msec."));
	init_more_data(data, argc, argv);
	return (0);
}

int	main(int argc, char *argv[])
{
	t_data	data;

	if (error_check_data(&data, argc, argv))
		return (0);
	if (init_forks(&data))
		return (0);
	if (init_philosophers(&data))
		return (0);
	checker_for_death(&data);
	if (join_philosophers(&data))
		return (0);
	destroy_forks(&data);
	return (0);
}
