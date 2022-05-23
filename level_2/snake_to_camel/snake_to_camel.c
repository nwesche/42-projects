/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:34:43 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/17 12:36:50 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	snake_to_camel(char *str)
{
	while (*str != '\0')
	{
		if (*str == '_')
		{
			++str;
			*str = *str - ('a' - 'A');
		}
		write(1, str, 1);
		++str;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		snake_to_camel(argv[1]);

	write(1, "\n", 1);
	return (0);
}