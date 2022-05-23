/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:03:05 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/18 18:04:03 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_union(char *a, char *b)
{
	int characters[128] = {0};
	int c;
	
	while(*a != '\0')
	{
		c = *a;
		if (characters[c] == 0)
		{
			write(1, a, 1);
			characters[c] = 1;
		}
		++a;
	}
	while(*b != '\0')
	{
		c = *b;
		if(characters[c] == 0)
		{
			write(1, b, 1);
			characters[c] = 1;
		}
		++b;
	}
}
	
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		print_union(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return 0;
}