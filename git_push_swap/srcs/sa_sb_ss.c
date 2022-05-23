/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:57:02 by nwesche           #+#    #+#             */
/*   Updated: 2022/04/19 13:15:30 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
//swap top two numbers in A
void	sa(t_data *stack)
{
	int	temp;

	temp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = temp;
	ft_putstr_fd("sa\n", 1);
}
//swap top two numbers in B
void	sb(t_data *stack)
{
	int	temp;

	temp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = temp;
	ft_putstr_fd("sb\n", 1);
}
// run sa & sb at the same time
void	ss(t_data *stack)
{
	int	temp_a;
	int	temp_b;

	if (stack->size_a > 1 && stack->size_b > 1)
	{
		temp_a = stack->a[0];
		temp_b = stack->b[0];
		stack->a[0] = stack->a[1];
		stack->a[1] = temp_a;
		stack->b[0] = stack->b[1];
		stack->b[1] = temp_b;
	}
	ft_putstr_fd("ss\n", 1);
}
