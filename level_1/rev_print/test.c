/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:20:22 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/19 11:50:15 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


char	*rev_print(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--; //einfügen, weil sonst steh ich auf terminierungsnull
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return(0);
}

int	main(void)
{
	rev_print("rainbow dash");
	write(1, "\n", 1);
	rev_print("PONIES ARE FUN");
	write(1, "\n", 1);
	rev_print("");
	write(1, "\n", 1);
	return (0);
}
