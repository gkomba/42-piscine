/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 08:04:12 by gkomba            #+#    #+#             */
/*   Updated: 2024/01/22 17:25:27 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	checkalpha(char g)
{
	if ((g >= 'a') && (g <= 'z'))
		return (1);
	if ((g >= 'A') && (g <= 'Z'))
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!checkalpha(*str))
			return (0);
		str++;
	}
	return (1);
}
