/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:24:40 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/18 10:13:50 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if (argc == 4 && argv[2][1] == '\0' && argv[3][1] == '\0')
	{
		while (*argv[1])
		{
			if (*argv[2] == *argv[1]) 
			{
				write(1, argv[3], 1);
			}
			else
				write(1, argv[1], 1);
				*argv[1]++;
		}
	}
	write(1, "\n", 1);
}