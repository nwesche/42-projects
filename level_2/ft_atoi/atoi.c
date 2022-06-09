/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:53:30 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/17 11:18:39 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//handle white spaces
//handle the sign
//handle the conversion
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
		sign = -1;
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

int main(int argc, char *argv[])
{
	int mine;
	int theirs;

	if (argc == 2)
	{
		mine = ft_atoi(argv[1]);
		theirs = atoi (argv[1]);
		printf("mine: %d | theirs: %d\n", mine, theirs);
	}
	return (0);
}
