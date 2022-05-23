/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:37:09 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/18 18:36:47 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(int argc, char *argv[])
{
	int a;
	int b;
	int *pa;
	int *pb;
	
	a = 100;
	b = 200;
	pa = &a;
	pb = &b;
	
	printf("before: %d %d\n", a, b);
	ft_swap(pa, pb);
	printf("after: %d %d\n", a, b);
	return 0;
}