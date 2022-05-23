/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:56:58 by nwesche           #+#    #+#             */
/*   Updated: 2022/04/15 14:29:16 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
//bottom number goes top
void	rra(t_data *stack)
{
	int	temp;
	int	i;

	temp = stack->a[stack->size_a - 1];
	i = stack->size_a;
	while (i-- > 0)
		stack->a[i] = stack->a[i - 1];
	stack->a[0] = temp;
	ft_putstr_fd("rra\n", 1);
}
//bottom number goes to top
void	rrb(t_data *stack)
{
	int	temp;
	int	i;

	temp = stack->b[stack->size_b - 1];
	i = stack->size_b;
	while (i-- > 0)
		stack->b[i] = stack->b[i - 1];
	stack->b[0] = temp;
	ft_putstr_fd("rrb\n", 1);
}
//run rra & rrb at the same time
void	rrr(t_data *stack)
{
	int	temp_a;
	int	temp_b;
	int	i;

	temp_a = stack->a[stack->size_a - 1];
	temp_b = stack->b[stack->size_b - 1];
	i = stack->size_a;
	while (i-- > 0)
		stack->a[i] = stack->a[i - 1];
	stack->a[0] = temp_a;
	i = stack->size_b;
	while (i-- > 0)
		stack->b[i] = stack->b[i - 1];
	stack->b[0] = temp_b;
	ft_putstr_fd("rrr\n", 1);
}
