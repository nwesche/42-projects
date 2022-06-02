/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:52:13 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/13 04:50:31 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_map_p(t_program *pro, char *map)
{
	int	i;
	int	p;

	i = 0;
	p = 0;
	while (map[i])
	{
		if (map[i] == 'P')
			p++;
		i++;
	}
	if (p != 1)
	{
		printf("Map Error - There must be at least 1 \"P\" in the Map.");
		ft_error_map(pro);
	}
}

void	check_map_c(t_program *pro, char *map)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (map[i])
	{
		if (map[i] == 'C')
			c++;
		i++;
	}
	if (c == 0)
	{
		printf("Map Error - There must be at least 1 \"C\" in the Map.");
		ft_error_map(pro);
	}
}

void	check_map_e(t_program *pro, char *map)
{
	int	i;
	int	e;

	i = 0;
	e = 0;
	while (map[i])
	{
		if (map[i] == 'E')
			e++;
		i++;
	}
	if (e == 0)
	{
		printf("Map Error - There must be at least 1 \"E\" in the Map.");
		ft_error_map(pro);
	}	
}

void	check_map_rect(t_program *pro, char *map)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = 0;
	while (map[i])
	{
		if (map[i] == '\n')
			j++;
		i++;
	}
	i = 0;
	while (map[i])
	{
		if (map[i] == '\n')
		{
			if (k == j)
				check_map_rect_error(pro);
			k = -1;
		}
		k++;
		i++;
	}
}

void	check_map(t_program *pro, char *map)
{
	check_map_p(pro, map);
	check_map_c(pro, map);
	check_map_e(pro, map);
	check_map_wall(pro, map);
	check_map_rect(pro, map);
	check_map_rect2(pro, map);
	check_map_forbidden_chars(pro, map);
}
