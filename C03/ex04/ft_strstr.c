/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 10:22:10 by gkomba            #+#    #+#             */
/*   Updated: 2024/01/27 11:47:15 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	j;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{	
		if (*str == to_find[0])
		{
			j = 0;
			while (str[j] == to_find[j] && to_find[j] != '\0')
				j++;
			if (to_find[j] == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}
