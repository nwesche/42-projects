/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:56:44 by nwesche           #+#    #+#             */
/*   Updated: 2022/04/19 13:33:09 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long	int_check(char *nptr)
{
	long	result;
	int		sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	if (!*nptr)
		return (2147483648);
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		if (nptr[++i] == '\0')
			return (2147483648);
	}
	while (nptr[i])
	{
		if (nptr[i] >= '0' && nptr[i] <= '9')
			result = result * 10 + (nptr[i] - '0');
		else
			return (2147483648);
		i++;
	}
	return (result *= sign);
}

int	check_input(int *input, int argc, char **argv)
{
	long	check;
	int		i;
	int		k;

	i = 1;
	k = 0;
	if (!input)
		exit(1);
	while (i <= argc)
	{
		check = int_check(argv[i]);
		if (check >= 2147483648 || check <= -2147483649)
		{
			ft_putstr_fd("Error\n", 1);
			free(input);
			exit(1);
		}
		input[k] = check;
		i++;
		k++;
	}
	return (1);
}

void	check_double(int *input, int len)
{
	int	i;
	int	k;

	i = 0;
	while (i < len)
	{
		k = i + 1;
		while (k < len)
		{
			if (input[i] == input[k])
			{
				ft_putstr_fd("Error\n", 1);
				free(input);
				exit(1);
			}
			k++;
		}
		i++;
	}
}

int	is_sorted(t_data *stack)
{
	int	i;

	i = 0;
	while (i < stack->size_a && stack->a[i] < stack->a[i + 1])
		i++;
	if (i == stack->size_a - 1)
		return (1);
	return (0);
}
