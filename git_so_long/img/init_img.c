/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_img.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 04:51:09 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/23 09:49:48 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	img_check_init(t_program *program)
{
	if (!program->wall)
	{
		ft_putstr_fd("Error - wall image cannot be loaded\n", 1);
		ft_error_image(program);
	}
	if (!program->character)
	{
		ft_putstr_fd("Error - character image cannot be loaded\n", 1);
		ft_error_image(program);
	}
	if (!program->space)
	{
		ft_putstr_fd("Error - empty image cannot be loaded\n", 1);
		ft_error_image(program);
	}
	if (!program->exit)
	{
		ft_putstr_fd("Error - exit image cannot be loaded\n", 1);
		ft_error_image(program);
	}
	if (!program->coin)
	{
		ft_putstr_fd("Error - coin image cannot be loaded\n", 1);
		ft_error_image(program);
	}
}

void	init_img(t_program *program, t_map *map)
{
	program->exit = mlx_xpm_file_to_image(program->mlx,
			"./images/exit.xpm", &map->exit_l, &map->exit_h);
	program->character = mlx_xpm_file_to_image(program->mlx,
			"./images/character.xpm", &map->character_l, &map->character_h);
	program->coin = mlx_xpm_file_to_image(program->mlx,
			"./images/coin.xpm", &map->coin_l, &map->coin_h);
	program->wall = mlx_xpm_file_to_image(program->mlx,
			"./images/wall.xpm", &map->wall_l, &map->wall_h);
	program->space = mlx_xpm_file_to_image(program->mlx,
			"./images/space.xpm", &map->space_l, &map->space_h);
}
