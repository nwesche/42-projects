/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:56:46 by nwesche           #+#    #+#             */
/*   Updated: 2022/04/21 13:40:55 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	len;
	int	i;

	i = 0;
	if (s == NULL)
		return ;
	len = ft_strlen(s);
	while (i < len)
	{
		write (fd, &s[i], 1);
		i++;
	}
}

void	small_sort(t_data *stack)
{
	if (stack->size_a == 2)
		sort2(stack);
	else if (stack->size_a == 3)
		sort3(stack);
	else if (stack->size_a == 4)
		sort4(stack);
	else if (stack->size_a == 5)
		sort5(stack);
}

void	arr_dup(int *src, int *dst, int len)
{
	if(!src || !dst)
		exit(1);
	while (--len >= 0)
		dst[len] = src[len];
}
