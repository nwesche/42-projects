/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 19:06:25 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/13 19:07:19 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int n)
{
	int prime;

	prime = n / 2;
	if (n <= 1)
		return (0);
	if (n == 2 || (prime * 2) != n)
		return (1);
	else
		return (0);
}

int	main()
{
	int	i;
	int	sum;
	int	prime;

	i = 0;
	sum = 0;
	prime = 5;
	while (i <= prime)
	{
		if (ft_is_prime(i))
			sum += i;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
