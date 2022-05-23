/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:35:39 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/17 12:36:24 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	camel_to_snake(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			write(1, "_", 1);
			*str = *str + ('a' - 'A');
		}
		write(1, str, 1);
		++str;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		camel_to_snake(argv[1]);

	write(1, "\n", 1);
	return (0);
}