/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:40:01 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/19 08:43:06 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_mirror(char c)
{
	if (c >= 'a' && c <= 'z')
		c = 'z' - (c - 'a');
	else if (c >= 'A' && c <= 'Z')
		c = 'Z'- (c - 'A');
	write(1, &c, 1);
}

int main (int argc, char *argv[])
{
	int i;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i])
		{
			print_mirror(argv[1][i++]);
		}
	}
	write(1, "\n", 1);
	return(0);
}