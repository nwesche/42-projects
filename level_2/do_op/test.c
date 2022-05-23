/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:28:49 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/18 13:05:27 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	i = 0;
	if (argc == 4)
	{
		if(argv[2][i] = '+')
		printf("%d", (atoi(argv[1]) + atoi(argv[3])));
	}
	printf("\n");
	return 0;
}
