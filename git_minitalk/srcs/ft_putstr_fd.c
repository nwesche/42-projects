/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:41:18 by nwesche           #+#    #+#             */
/*   Updated: 2022/02/25 16:41:18 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int	j;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		j = s[i];
		write (fd, &j, 1);
		i++;
	}
}
