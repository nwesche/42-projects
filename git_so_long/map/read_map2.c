/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:46:59 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/23 17:58:04 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	read_map_helper(int fd, int *i, t_program *program)
{
	char *mem;
	int start;
	char *tmp;

	start = -1;
	mem = 0;
	while (start != 0)
	{
		mem = get_next_line(fd);
		if (!mem)
			start = 0;
		if (*i < 1)
			program->check = (ft_strlen(mem));
		if (mem != 0)
			tmp = ft_strjoin(program->gnl, mem);
			free(program->gnl);
			program->gnl = tmp;
		(*i)++;
		free(mem);
	}
}
