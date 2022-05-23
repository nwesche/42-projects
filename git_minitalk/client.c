/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:30:19 by nwesche           #+#    #+#             */
/*   Updated: 2022/03/02 15:34:29 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	snd_err_c(char *str)
{
	if (str)
		free(str);
	ft_putstr_fd("client: failed execution.\n", 2);
	exit(EXIT_FAILURE);
}

int	set_zero(int pid, char *str)
{
	static int	i = 0;

	if (i++ != 8)
	{
		if (kill(pid, SIGUSR1) == -1)
			snd_err_c(str);
		return (0);
	}
	return (1);
}

int	send_bit(int pid, char *str)
{
	static char		*message = 0;
	static int		s_pid = 0;
	static int		bits = -1;

	if (str)
		message = ft_strdup(str);
	if (!message)
		snd_err_c(0);
	if (pid)
		s_pid = pid;
	if (message[++bits / 8])
	{
		if (message[bits / 8] & (0x80 >> (bits % 8)))
		{
			if (kill(s_pid, SIGUSR2) == -1)
				snd_err_c(message);
		}
		else if (kill(s_pid, SIGUSR1) == -1)
			snd_err_c(message);
		return (0);
	}
	if (!set_zero(s_pid, message))
		return (0);
	free(message);
	return (1);
}

void	handle_sgnls(int signum)
{
	int		end;

	end = 0;
	if (signum == SIGUSR1)
			end = send_bit(0, 0);
	else if (signum == SIGUSR2)
	{
		ft_putstr_fd("client: random server shutdown.\n", 2);
		exit(EXIT_FAILURE);
	}
	if (end)
	{
		ft_putstr_fd("client: successfull process.\n", 1);
		exit(EXIT_SUCCESS);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3 || !ft_str_isnumeric(argv[1]))
	{
		ft_putstr_fd("client: invalid arguments.\n", 2);
		ft_putstr_fd("correct format: [./client <PID> <STR>].\n", 2);
		exit(EXIT_FAILURE);
	}
	signal(SIGUSR1, handle_sgnls);
	signal(SIGUSR2, handle_sgnls);
	send_bit(ft_atoi(argv[1]), argv[2]);
	while (1)
		pause();
}
