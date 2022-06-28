/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:20:08 by nwesche           #+#    #+#             */
/*   Updated: 2022/04/28 11:20:21 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int count;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				count = argv[1][i] - 65;
			}
			else if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				count = argv[1][i] - 96;
			}
			while(count)
			{
				write(1, &argv[1][i], 1);
				count--;
			}
			count = 1;
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
