/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:51:10 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/18 18:46:52 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_repeat_alpha(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			j = str[i] - 65;
			while(j >= 0)
			{
				ft_putchar(str[i]);
				j--;
			}
		}
		else if(str[i] >= 'a' && str[i] <= 'z')
		{
			j = str[i] - 97;
			while(j >= 0)
			{
				ft_putchar(str[i]);
				j--;
			}
		}
		i++;
	}
	write(1, "\n", 1);
	return 0;
}

int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		ft_repeat_alpha(argv[1]);
	}
	else
		write(1, "\n", 1);
	return 0;
}