/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 19:01:46 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/18 14:52:56 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	
	i = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
			i++;
		i--;
		while((argv[1][i] != ' ' && argv[1][i] != '\t') && i >= 0)
			i--;
		i++;
		while (argv[1][i] != '\0')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
		return(0);
}
