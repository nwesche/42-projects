/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 19:11:26 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/13 19:11:32 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int    d;

    if (!a || !b)
        return (0);
    if (a > b)
        d = (a / 2) + 1;
    else
        d = (b / 2) + 1;
    while (!((a % d) == 0 && (b % d) == 0))
        d--;
    return (a * b / d);
}
