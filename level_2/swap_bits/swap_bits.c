/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:15:33 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/13 19:04:15 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int	main(void)
{
	unsigned char c;

	c = 't';
	write(1, &c, 1);
	write(1, "\n", 1);
	c = swap_bits(c);
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}
