/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 10:17:33 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/19 08:41:58 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int		main(int argc, char *argv[])
{
	if (argc == 4 && argv[2][1] == '\0' && argv[3][1] == '\0')
	{
		while (*argv[1])
		{
			if (*argv[2] == *argv[1]) //wenn arg2 = arg1 ist, schreibst du arg3
				write(1, argv[3], 1);
			else
				write(1, argv[1], 1); // ansonsten arg1
				argv[1]++;
		}
	}
	write(1, "\n", 1);
}