/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:30:27 by nwesche           #+#    #+#             */
/*   Updated: 2022/02/25 16:57:27 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

char	*print_msg(char *message);
char	*ft_straddc_first(char c);
char	*ft_straddc(char *str, char c);
char	*ft_strdup(const char *src);
int		send_bit(int pid, char *str);
int		set_zero(int pid, char *str);
int		ft_str_isnumeric(char *str);
int		ft_atoi(const char *nptr);
int		ft_isdigit(int c);
size_t	ft_strlen(const char *s);
void	snd_err_s(int pid, char *str);
void	snd_err_c(char *str);
void	hndl_sigusr(int sigum, siginfo_t *info, void *context);
void	handle_sgnls(int signum);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
#endif