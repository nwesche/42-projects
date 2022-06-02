/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_errors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:57:35 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/20 04:48:15 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_error_image(t_program *pro)
{
	if (pro->character)
		mlx_destroy_image(pro->mlx, pro->character);
	if (pro->coin)
		mlx_destroy_image(pro->mlx, pro->coin);
	if (pro->exit)
		mlx_destroy_image(pro->mlx, pro->exit);
	if (pro->wall)
		mlx_destroy_image(pro->mlx, pro->wall);
	if (pro->space)
		mlx_destroy_image(pro->mlx, pro->space);
	free(pro->mlx);
	exit(0);
}

void	ft_error_map(t_program *pro)
{
	if (pro->character)
		mlx_destroy_image(pro->mlx, pro->character);
	if (pro->coin)
		mlx_destroy_image(pro->mlx, pro->coin);
	if (pro->exit)
		mlx_destroy_image(pro->mlx, pro->exit);
	if (pro->wall)
		mlx_destroy_image(pro->mlx, pro->wall);
	if (pro->space)
		mlx_destroy_image(pro->mlx, pro->space);
	mlx_destroy_display(pro->mlx);
	free(pro->mlx);
	free(pro->gnl);
	exit(0);
}
