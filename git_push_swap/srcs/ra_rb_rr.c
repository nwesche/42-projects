/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:56:55 by nwesche           #+#    #+#             */
/*   Updated: 2022/04/20 09:31:40 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
//top number goes bottom
void	ra(t_data *stack)
{
	int	temp;
	int	i;

	temp = stack->a[0];
	i = -1;
	while (++i < stack->size_a - 1)
		stack->a[i] = stack->a[i + 1];
	stack->a[stack->size_a - 1] = temp;
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_data *stack)
{
	int	temp;
	int	i;

	temp = stack->b[0];
	i = -1;
	while (++i < stack->size_b - 1)
		stack->b[i] = stack->b[i + 1];
	stack->b[stack->size_b - 1] = temp;
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_data *stack)
{
	int	temp_a;
	int	temp_b;
	int	i;

	temp_a = stack->a[0];
	temp_b = stack->b[0];
	i = -1;
	while (++i < stack->size_a - 1)
		stack->a[i] = stack->a[i + 1];
	stack->a[stack->size_a - 1] = temp_a;
	i = -1;
	while (++i < stack->size_b - 1)
		stack->b[i] = stack->b[i + 1];
	stack->b[stack->size_b - 1] = temp_b;
	ft_putstr_fd("rr\n", 1);
}
