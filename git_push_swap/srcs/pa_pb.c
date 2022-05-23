/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:56:50 by nwesche           #+#    #+#             */
/*   Updated: 2022/04/21 14:13:26 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// send top of A to top of B
void	pa(t_data *stack)
{
	int	temp;
	int	i;

	temp = stack->b[0];
	i = stack->size_a;
	while (i-- > 0)
		stack->a[i + 1] = stack->a[i];
	i = -1;
	while (++i < stack->size_b)
		stack->b[i] = stack->b[i + 1];
	stack->a[0] = temp;
	++stack->size_a;
	--stack->size_b;
	ft_putstr_fd("pa\n", 1);
}
// send top of A to top of B
void	pb(t_data *stack)
{
	int	temp;
	int	i;

	temp = stack->a[0];
	i = -1;
	while (++i < (stack->size_a - 1))
		stack->a[i] = stack->a[i + 1];
	i = stack->size_b + 1;
	while (--i > 0)
		stack->b[i] = stack->b[i - 1];
	stack->b[0] = temp;
	--stack->size_a;
	++stack->size_b;
	ft_putstr_fd("pb\n", 1);
}
