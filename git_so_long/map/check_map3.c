/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:52:33 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/20 04:55:36 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	error_forbidden_chars(t_program *pro)
{
	printf("Map Error - The Map has forbidden chars.");
	ft_error_map(pro);
}

void	check_map_forbidden_chars(t_program *pro, char *map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		if (map[i] == 'P' || map[i] == 'C' || map[i] == '1'
			|| map[i] == '0' || map[i] == 'E' || map[i] == '\n' )
			i++;
		else
			error_forbidden_chars(pro);
	}
}
