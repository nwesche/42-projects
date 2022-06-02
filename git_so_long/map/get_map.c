/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:36:48 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/20 05:41:12 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	get_map(t_program *program)
{
	program->gnl = 0;
	program->map_h = 0;
	program->map_w = 0;
	program->print_x = 0;
	program->print_y = 0;
	program->count_coin = 0;
	program->finish = 0;
	program->move = 1;
	program->steps = 0;
}
