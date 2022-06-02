/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:19:36 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/23 09:45:55 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_print(t_program *pro, int keycode)
{
	if (keycode == 119)
	{
		pro->character_pos_x -= 32;
		pro->ch1 -= pro->check;
		pro->steps += 1;
	}
	if (keycode == 100)
	{
		pro->character_pos_y += 32;
		pro->ch1++;
		pro->steps += 1;
	}
	if (keycode == 115)
	{
		pro->character_pos_x += 32;
		pro->ch1 += pro->check;
		pro->steps += 1;
	}
	if (keycode == 97)
	{
		pro->character_pos_y -= 32;
		pro->ch1--;
		pro->steps += 1;
	}
}

void	print_empty(t_program *pro, int keycode)
{
	if (keycode == 119 && pro->gnl[pro->ch1 - pro->check] != '1')
		if (pro->gnl[pro->ch1 - pro->check] != 'E' || pro->finish == 1)
			mlx_put_image_to_window(pro->mlx, pro->win, pro->space,
				pro->character_pos_y, pro->character_pos_x);
	if (keycode == 100 && pro->gnl[pro->ch1 + 1] != '1')
		if (pro->gnl[pro->ch1 +1] != 'E' || pro->finish == 1)
			mlx_put_image_to_window(pro->mlx, pro->win, pro->space,
				pro->character_pos_y, pro->character_pos_x);
	if (keycode == 115 && pro->gnl[pro->ch1 + pro->check] != '1')
		if (pro->gnl[pro->ch1 + pro->check] != 'E' || pro->finish == 1)
			mlx_put_image_to_window(pro->mlx, pro->win, pro->space,
				pro->character_pos_y, pro->character_pos_x);
	if (keycode == 97 && pro->gnl[pro->ch1 - 1] != '1')
		if (pro->gnl[pro->ch1 - 1] != 'E' || pro->finish == 1)
			mlx_put_image_to_window(pro->mlx, pro->win, pro->space,
				pro->character_pos_y, pro->character_pos_x);
}

void	move(t_program *pro, int keycode)
{
	print_empty(pro, keycode);
	if (keycode == 119 && pro->gnl[pro->ch1 - pro->check] != '1')
		if (pro->gnl[pro->ch1 - pro->check] != 'E' || pro->finish == 1)
			ft_print(pro, keycode);
	if (keycode == 100 && pro->gnl[pro->ch1 + 1] != '1')
		if (pro->gnl[pro->ch1 + 1] != 'E' || pro->finish == 1)
			ft_print(pro, keycode);
	if (keycode == 115 && pro->gnl[pro->ch1 + pro->check] != '1')
		if (pro->gnl[pro->ch1 + pro->check] != 'E' || pro->finish == 1)
			ft_print(pro, keycode);
	if (keycode == 97 && pro->gnl[pro->ch1 - 1] != '1')
		if (pro->gnl[pro->ch1 - 1] != 'E' || pro->finish == 1)
			ft_print(pro, keycode);
}
