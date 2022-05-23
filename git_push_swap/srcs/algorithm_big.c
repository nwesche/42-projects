/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_big.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:56:37 by nwesche           #+#    #+#             */
/*   Updated: 2022/04/19 12:43:13 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	big_sort(t_data *stack)
{
	stack->bits = 0;
	stack->value = stack->size_a - 1;
	while (stack->value >> stack->bits)
		++stack->bits;
	final_sort(stack);
}

void	final_sort(t_data *stack)
{
	int	i;
	int	j;
	int	size;

	size = stack->size_a;
	i = 0;
	while (i < stack->bits)
	{
		j = 0;
		while (j < size)
		{
			if (((stack->a[0] >> i) & 1) == 1)
				ra(stack);
			else
				pb(stack);
			j++;
		}
		while (stack->size_b > 0)
			pa(stack);
		i++;
	}
}
