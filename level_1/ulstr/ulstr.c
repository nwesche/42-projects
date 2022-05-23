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
	char	letter;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			letter = argv[1][i];
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				letter + 32;
			}
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				letter - 32;
			}
			ft_putchar(letter);
			i++;
		}
	}
	ft_putchar('\n');
	return(0);
}