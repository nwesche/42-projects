/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 19:11:53 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/13 19:12:00 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int res;
	int sign;
	
	res = 0;
	sign = 1;
	while(*str == 32 || *str >= 9 && *str <= 13)
	{
		str++;
	}
	if (*str == '-')
	{
		sign += -1;
	}
	if (*str == '-' || *str == '+')
	{
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return(sign * res);
}

int		main(int argc, char const *argv[])
{
	int		nbr1;
	int		nbr2;

	if (argc == 3)
	{
		if ((nbr1 = ft_atoi(argv[1])) > 0 && (nbr2 = ft_atoi(argv[2])) > 0)
		{
			while (nbr1 != nbr2)
			{
				if (nbr1 > nbr2)
					nbr1 -= nbr2;
				else
					nbr2 -= nbr1;
			}
			printf("%d", nbr1);
		}
	}
	printf("\n");
	return (0);
}
