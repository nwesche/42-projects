/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 11:30:22 by nwesche           #+#    #+#             */
/*   Updated: 2022/01/31 16:26:40 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_variable(void *arg, const char format, int *total)
{
	if (format == 'd' || format == 'i')
		*total += ft_print_unsigned_d(*(int *) &arg);
	else if (format == 'u')
		*total += ft_print_u(*(unsigned int *) &arg);
	else if (format == 'c')
		*total += ft_print_c(*(char *) &arg);
	else if (format == 's')
		*total += ft_print_s((char *) arg);
	else if (format == 'p')
		*total += ft_print_p((unsigned long) arg);
	else if (format == 'x')
		*total += ft_print_hex_l(*(unsigned int *) &arg);
	else if (format == 'X')
		*total += ft_print_hex_u(*(unsigned int *) &arg);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		total;
	va_list	args;

	i = -1;
	total = 0;
	va_start(args, format);
	while (format[++i] != 0)
	{
		if (format[i] != '%')
			total += write(1, &format[i], 1);
		else if (format[i + 1] == '%')
			total += ft_print_percent(&i);
		else
		{
			ft_put_variable(va_arg(args, void *), format[i + 1], &total);
			i++;
		}
	}
	va_end(args);
	return (total);
}
