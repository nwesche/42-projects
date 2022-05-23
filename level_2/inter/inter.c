/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:56:20 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/19 08:45:14 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_chars(char *s1, char *s2)
{
	int tab[256] = {0};
	int i;
	
	i = 0;
	while (s2[i])
	{
		tab[(int)s2[i++]] = 1; // -> tab at 97 (a) is equal to one
	}
	i = 0;
	while(s1[i]) //examine s1
	{
		if(tab[(int)s1[i]] == 1) //check if s1 by i has a char
		{
			write(1, &s1[i], 1); //write that value
			tab[(int)s1[i]] = 2; //no duplicates, by setting var to int 2 -> will skip first loop
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	if(argc == 3)
	{
		print_chars(argv[1], argv[2]);
		write(1, "\n", 1);
		return (0);
	}
}
