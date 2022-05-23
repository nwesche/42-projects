/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:10:43 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/17 14:33:23 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int max(int *tab, unsigned int len)
{
	int max;
	
	if(len > 0)
	{
		max = tab[--len];
		while(len--)
		{
			if(tab[len] > max)
				max = tab[len];
		}
		return(max);
	}
	return(0);
}
int main(void)
{
	int tab[] = {3, 44, 5, 74, 66, 98};
	printf("max: %d\n", max(tab, 6));
	return(0);
}