/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 10:17:04 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/16 14:49:54 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int main(int argc, const char *argv[])
{
	int a;
	int b;
	int *pa;
	int *pb;

	a = 100;
	b = 200;
	pa = &a;
	pb = &b;

	printf("%d %d \n", a, b);
	ft_swap(pa, pb);
	printf("%d %d \n", a, b);
	return 0;
}