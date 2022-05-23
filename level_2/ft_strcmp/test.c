/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:46:21 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/18 13:26:50 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	i = 0;
	while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return(s1[i] - s2[i]);
}


/*int		main(void)
{
	printf("%d\n", ft_strcmp("same","same"));
	printf("%d\n", ft_strcmp("notsame", "nsame"));
	printf("%d\n", strcmp("same", "same"));
	printf("%d\n", strcmp("notsame", "nsame"));
	return (0); 
}*/
int		main()
{
	char s1[] = "abcdef";
	char s2[] = "abcdef";

	int i;
	i = ft_strcmp(s1, s2);
	printf("%d", i);
}