/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:51:18 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/18 13:13:47 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//handle white spaces
//handle the sign
//handle the conversion
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *str)
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
		res = res * 10 + *str -'0';
		str++;
	}
	return(sign * res);
}
int main(int argc, char *argv[])
{
	int mine;
	int their;
	if(argc == 2)
	{
		mine = ft_atoi(argv[1]);
		their = atoi(argv[1]);
		printf("mine: %d | their: %d\n", mine, their);
	}
	return 0;
}
