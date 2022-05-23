/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:15:18 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/17 16:23:57 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_putstr(char *str)
{
	int i; 
	
	i = 0;
	
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		while(argv[2][j])
			if (argv[2][j++] == argv[1][i])
			{
				i += 1;
			}
		if(!argv[1][i])
		{
			ft_putstr(argv[1]);
		}
	}
	write(1, "\n", 1);
		return 0;
}