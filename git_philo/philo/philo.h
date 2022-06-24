/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:32:56 by nwesche           #+#    #+#             */
/*   Updated: 2022/06/16 12:42:21 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H
# include <unistd.h>
# include <pthread.h>
# include <sys/time.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_philo
{
	pthread_t		philosopher;
	struct s_data	*data;
	long long		timestamp;
	int				id;
	int				id_right;
}		t_philo;

typedef struct s_data
{
	int				number_of_philosophers;
	int				time_to_die;
	int				is_dead;
	int				time_to_eat;
	int				time_to_sleep;
	int				times_to_eat;
	int				total_meals;
	pthread_mutex_t	forks[200];
	pthread_mutex_t	time;
	pthread_mutex_t	print;
	pthread_mutex_t	meals;
	long long		start_time;
	t_philo			ph[200];
}		t_data;

int			init_forks(t_data *data);
int			destroy_forks(t_data *data);
int			init_philosophers(t_data *data);
int			join_philosophers(t_data *data);
int			check_death(t_data *data);
int			ft_atoi(const char *nptr);
int			check_meals(t_data *data);
int			check_non_int_args(int argc, char *argv[]);
int			error_check_data(t_data *data, int argc, char *argv[]);
int			print_guidance(void);
int			print_error(char *s);
void		is_eating(t_philo *philo);
void		is_sleeping_and_thinking(t_philo *philo);
void		keep_eat(t_philo *philo);
void		*eat_cycle(void	*received_t_philo);
void		print_death(t_philo *philo, char *s);
void		safe_print(t_philo *philo, char *s);
void		philo_left_handed(t_philo *philo);
void		philo_right_handed(t_philo *philo);
void		init_start_time(t_data *data);
void		checker_for_death(t_data *data);
void		init_more_data(t_data *data, int argc, char **argv);
long long	get_timestamp(t_philo *philo);
long long	time_since_meal(t_philo *philo);

#endif