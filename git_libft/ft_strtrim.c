/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 10:20:40 by nwesche           #+#    #+#             */
/*   Updated: 2021/06/07 10:20:40 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_charset(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	size_t	i;
	size_t	bgn;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	bgn = 0;
	while (s1[bgn] && ft_charset(s1[bgn], set))
		bgn++;
	end = ft_strlen(s1);
	while (end > bgn && ft_charset(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(*s1) * (end - bgn + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (bgn < end)
		str[i++] = s1[bgn++];
	str[i] = 0;
	return (str);
}
