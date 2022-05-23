/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:56:29 by nwesche           #+#    #+#             */
/*   Updated: 2022/04/20 12:58:00 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_input(t_data *stack, int *input)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	while (i < stack->size_a - 1)
	{
		j = 0;
		while (j < stack->size_a - 1 - i)
		{
			if (input[j] > input[j + 1])
			{
				temp = input[j + 1];
				input[j + 1] = input[j];
				input[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void	indexing(t_data *stack, int *input, int *sorted)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->size_a)
	{
		j = 1;
		while (j < stack->size_a)
		{
			if (input[i] == sorted[j])
				stack->a[i] = j;
			j++;
		}
		i++;
	}
}

void	init_stacks(int *input, int len)
{
	t_data	stack;
	int		*sorted;

	stack.size_a = len;
	stack.size_b = 0;
	stack.a = malloc(sizeof(int) * len);
	stack.b = malloc(sizeof(int) * len);
	sorted = malloc(sizeof(int) * len);
		if(!stack.a || !stack.b || !sorted)
			return ;
	arr_dup(input, sorted, len);
	sort_input(&stack, sorted);
	indexing(&stack, input, sorted);
	if (!is_sorted(&stack))
	{
		if (len <= 5)
			small_sort(&stack);
		else
			big_sort(&stack);
	}
	free_all(&stack, input, sorted);
}

void	free_all(t_data *stack, int *input, int *sorted)
{
	free(input);
	free(stack->a);
	free(stack->b);
	free(sorted);
}

int	main(int argc, char *argv[])
{
	int	*input;

	if (argc <= 1)
		exit(1);
	input = malloc(sizeof(int) * (argc -1));
		if(!input)
			return (0);
	check_input(input, argc - 1, argv);
	check_double(input, argc - 1);
	init_stacks(input, argc - 1);
	return (0);
}
