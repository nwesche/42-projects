/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:57:05 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/23 10:15:08 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char *argv[])
{
	t_program	program;
	t_map		map;

	if (argc != 2)
	{
		ft_putstr_fd("Error! False number of arguments.", 1);
		ft_putstr_fd("\n", 1);
	}
	program.mlx = mlx_init();
	if (!program.mlx)
		return (0);
	init_img(&program, &map);
	read_map(&program, argv[1]);
	mlx_key_hook(program.win, ft_pressbutton, &program);
	mlx_hook(program.win, 17, 0, ft_close, &program);
	mlx_loop(program.mlx);
	ft_exit(&program);
}
