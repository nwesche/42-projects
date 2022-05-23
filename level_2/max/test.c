/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:25:49 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/18 15:43:29 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int max(int *tab, unsigned int len)
{
	int max;

	if(len > 0)
	{
		max = tab[len--];
		while(len--)
		{
			if(tab[len] > max)
				max = tab[len];
		}
		return max;
	}
	return 0;
}
int main()
{
	int tab[3] = {3, 43534, 654};
	printf("max: %d\n", max(tab, 3));
	return 0;
}
