/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 12:32:27 by nwesche           #+#    #+#             */
/*   Updated: 2022/06/16 12:24:39 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	print_guidance(void)
{
	printf("Error!\n Run program with ./number_of_philosophers ");
	printf("time_to_die time_to_eat time_to_sleep [number_of_times_");
	printf("each_philosophers_must_eat]");
	return (1);
}

int	print_error(char *s)
{
	printf("Error! \n%s\n", s);
	return (1);
}
