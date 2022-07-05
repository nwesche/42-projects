/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:21:30 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/19 11:42:41 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*rev_print(char *str)
{
	int i;
	
	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	i--;
	while(i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
	ft_putchar('\n');
	return(0);
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		rev_print(argv[1]);
	}
	ft_putchar('\n');
	return(0);
}
