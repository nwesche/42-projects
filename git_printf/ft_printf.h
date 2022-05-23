/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:55:52 by nwesche           #+#    #+#             */
/*   Updated: 2022/01/31 15:31:41 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

int			ft_printf(const char *format, ...);
void		ft_put_variable(void *arg, const char format, int *total);
int			ft_print_c(char c);
int			ft_print_hex_l(unsigned int n);
int			ft_print_hex_u(unsigned int n);
int			ft_print_p(unsigned long n);
int			ft_print_percent(int *i);
int			ft_print_s(char *str);
int			ft_print_u(unsigned int n);
int			ft_print_unsigned_d(int n);
int			ft_printnbr_hex_u(unsigned int n);
void		ft_putchar_fd(char c, int fd);
int			ft_printnbr_hex_l(unsigned int n);
int			ft_printnbr_hex(unsigned long n);
void		ft_putstr(char *str);
int			ft_printnbr(int n);
int			ft_num_len(unsigned	int num);
char		*ft_uitoa(unsigned int n);
int			ft_printstr(char *str);
#endif