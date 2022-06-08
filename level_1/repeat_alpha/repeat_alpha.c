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

char	letter_count(char c)
{
	if (c >= 'a' && c <= 'z')
		return(c - 'a' + 1);
	if (c >= 'A' && c <= 'Z')
		return(c - 'A' + 1);
	return(1);
}

int main(int argc, char *argv[])
{
	int i;
	int count;
	
	if(argc == 2)
	{
		while(argv[1][i])
		{
			count = letter_count(argv[1][i]);
			while(count--)
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
