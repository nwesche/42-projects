/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:23:32 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/23 09:55:35 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_exit(t_program *pro)
{
	mlx_destroy_image(pro->mlx, pro->character);
	mlx_destroy_image(pro->mlx, pro->coin);
	mlx_destroy_image(pro->mlx, pro->exit);
	mlx_destroy_image(pro->mlx, pro->wall);
	mlx_destroy_image(pro->mlx, pro->space);
	mlx_destroy_window(pro->mlx, pro->win);
	mlx_destroy_display(pro->mlx);
	free(pro->mlx);
	free(pro->gnl);
}
