/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:56:33 by nwesche           #+#    #+#             */
/*   Updated: 2022/04/19 13:41:18 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

typedef struct s_data
{
	int	size_a;
	int	size_b;
	int	*a;
	int	*b;
	int	bits;
	int	value;
}				t_data;

void	pa(t_data *stack);
void	pb(t_data *stack);
void	sa(t_data *stack);
void	sb(t_data *stack);
void	ss(t_data *stack);
void	ra(t_data *stack);
void	rb(t_data *stack);
void	rr(t_data *stack);
void	rra(t_data *stack);
void	rrb(t_data *stack);
void	rrr(t_data *stack);

void	sort_input(t_data *stack, int *input);
void	indexing(t_data *stack, int *input, int *sorted);
void	free_all(t_data *stack, int *input, int *sorted);
void	big_sort(t_data *stack);
void	final_sort(t_data *stack);
void	sort2(t_data *stack);
void	sort3(t_data *stack);
void	sort4(t_data *stack);
void	sort5(t_data *stack);
void	get_low_value(t_data *stack);
void	check_double(int *input, int len);
void	init_stacks(int *input, int len);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);
void	small_sort(t_data *stack);
void	arr_dup(int *src, int *dst, int len);
long	int_check(char *nptr);
int	check_input(int *input, int argc, char **argv);
int	is_sorted(t_data *stack);

#endif