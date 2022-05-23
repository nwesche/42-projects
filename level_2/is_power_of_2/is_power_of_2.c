/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:59:26 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/18 14:39:45 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		is_power_of_2(unsigned int n)
{
	if ( n == 0)
		return (0);
	while(n % 2 == 0)
	{
		n /= 2; //chopping numbers down
	}
	if (n == 1)
		return (1);
	return(0);
}

int main()
{
	unsigned int n;

	n = 13;
	if(is_power_of_2(n) == 1)
	{
		printf("%d is power of 2\n", n);
	}
	else
		printf("%d is NOT a power of 2\n", n);
	return(0);
}