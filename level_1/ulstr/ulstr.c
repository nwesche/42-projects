/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 09:49:22 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/16 18:00:13 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int		i;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				ft_putchar(argv[1][i] + 32);
			else if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
				ft_putchar(argv[1][i] - 32);
			else
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return(0);
}
