/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:55:32 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/23 17:58:17 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	printmap(t_program *program, char type)
{
	if (type == 48)
		mlx_put_image_to_window(program->mlx, program->win,
			program->space, program->print_x, program->print_y);
	if (type == 49)
		mlx_put_image_to_window(program->mlx, program->win,
			program->wall, program->print_x, program->print_y);
	if (type == 67)
	{
		mlx_put_image_to_window(program->mlx, program->win,
			program->coin, program->print_x, program->print_y);
		program->count_coin++;
	}
	if (type == 69)
		mlx_put_image_to_window(program->mlx, program->win,
			program->exit, program->print_x, program->print_y);
	if (type == 80)
	{
		mlx_put_image_to_window(program->mlx, program->win,
			program->character, program->print_x, program->print_y);
		program->character_pos_x = program->print_y;
		program->character_pos_y = program->print_x;
	}
	program->print_x += 32;
}

void	read_line(t_program *program)
{
	int	i;

	i = -1;
	if (program->map_w == 0)
	{
		while (program->gnl[++i] != '\n')
			program->map_w += 1;
		program->map_w *= 32;
		program->win = mlx_new_window(program->mlx, (program->map_w),
				(program->map_h), "42 Wonderland");
	}
	i = 0;
	while (program->gnl[i] != '\0')
	{
		if (program->gnl[i] == '\n')
		{
			program->print_y += 32;
			program->print_x = 0;
		}
		else
		{
			printmap(program, program->gnl[i]);
		}
		++i;
	}
	character_start(program);
}

void	read_map(t_program *program, char *argv)
{
	int		fd;
	int		i;

	i = 0;
	get_map(program);
	fd = open(argv, O_RDONLY);
	if (fd < 3)
		printf("error\n");
	program->gnl = ft_calloc(1, sizeof(char));
	if (!program->gnl)
		printf("error");
	read_map_helper(fd, &i, program);
	check_map(program, program->gnl);
	program->map_h = ((i - 1) * 32);
	read_line(program);
}
