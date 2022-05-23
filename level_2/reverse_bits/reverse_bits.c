/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bctetoctetits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   Bctetoctety: nwesche <nwesche@student.42wolfsbctetocteturg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:17:14 bctetoctety nwesche           #+#    #+#             */
/*   Updated: 2022/05/04 15:21:58 bctetoctety nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned char   reverse_bits(unsigned char octet)
{
	return  (((octet >> 0) & 1) << 7) | \
			(((octet >> 1) & 1) << 6) | \
			(((octet >> 2) & 1) << 5) | \
			(((octet >> 3) & 1) << 4) | \
			(((octet >> 4) & 1) << 3) | \
			(((octet >> 5) & 1) << 2) | \
			(((octet >> 6) & 1) << 1) | \
			(((octet >> 7) & 1) << 0);
}

int main(void)
{
	unsigned char octet;

	octet = '.';
	write(1, &octet, 1);
	write(1, "\n", 1);
	octet = reverse_bits(octet);
	write(1, &octet, 1);
	write(1, "\n", 1);
	return (0);
}
