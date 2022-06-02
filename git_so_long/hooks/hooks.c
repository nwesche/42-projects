/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:19:28 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/23 09:48:56 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_exit(t_program *pro)
{
	if (pro->count_coin == 0)
		pro->finish = 1;
	if (pro->gnl[pro->ch1] == 'E' && pro->finish == 1)
	{
		ft_putstr_fd("Well done, you aced it! ", 1);
		ft_putnbr_fd(pro->steps, 1);
		ft_putstr_fd(" Steps!", 1);
		ft_putstr_fd("\nEnd the game with ESC or close the window.", 1);
		pro->move = 0;
	}
}

void	check_coin(t_program *pro)
{
	pro->gnl[pro->ch1] = '0';
	pro->count_coin--;
}

int	ft_pressbutton(int keycode, t_program *pro)
{
	if (keycode == 65307)
		ft_close(pro);
	if (pro->move == 1)
	{
		pro->check_steps = pro->steps;
		move(pro, keycode);
		if (pro->check_steps != pro->steps)
		{
			ft_putstr_fd("Amount of steps = ", 1);
			ft_putnbr_fd(pro->steps, 1);
			ft_putstr_fd("\n", 1);
		}
		check_exit(pro);
	}
	if (pro->gnl[pro->ch1] == 'C')
		check_coin(pro);
	mlx_put_image_to_window(pro->mlx, pro->win, pro->character,
		pro->character_pos_y, pro->character_pos_x);
	return (0);
}

int	ft_close(t_program *pro)
{
	mlx_loop_end(pro->mlx);
	return (0);
}

void	character_start(t_program *pro)
{
	pro->ch1 = 0;
	while (pro->gnl && pro->gnl[pro->ch1] != 'P')
		pro->ch1++;
}
