/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:24:54 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/16 11:30:45 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int		len;
	long	n;
	char	*str;

	if (nbr == -2147483648)
		return ("-2147483648");
	len = 0;
	n_tmp = nbr;
	while (n_tmp)
	{
		n_tmp /= 10
		len += 1;
	}
	if (nbr < 0)
	{
		len += 1;
		nbr *= -1;
	}
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	str[len] ='\0';
	while (nbr)
	{
		str[len] = (n % 10) + '0';
		nbr /= 10;
	}
	return (str);
}