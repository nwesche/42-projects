/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:40:36 by nwesche           #+#    #+#             */
/*   Updated: 2022/01/27 15:44:24 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printnbr_hex_u(unsigned int n)
{
	int		value;
	long	store;

	store = 0;
	if (n > 15)
		ft_printnbr_hex_u(n / 16);
	value = n % 16;
	if (value == 10)
		value = 'A';
	else if (value == 11)
		value = 'B';
	else if (value == 12)
		value = 'C';
	else if (value == 13)
		value = 'D';
	else if (value == 14)
		value = 'E';
	else if (value == 15)
		value = 'F';
	else
		value += 48;
	write(1, &value, 1);
	return (store);
}

int	ft_print_hex_u(unsigned int n)
{
	int				count;
	unsigned int	temp;

	temp = n;
	count = 0;
	if (n == 0)
	{
		ft_putstr("0");
		return (1);
	}
	ft_printnbr_hex_u(n);
	while (temp > 0)
	{
		temp = temp / 16;
		count++;
	}
	return (count);
}
