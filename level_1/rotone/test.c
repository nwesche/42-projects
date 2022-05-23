/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:40:59 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/16 17:11:44 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_rotone(char *str)
{
	
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_rotone(argv[1]);
	}
	else
	{
		ft_putchar('\n');
	}
	return(0);
}
