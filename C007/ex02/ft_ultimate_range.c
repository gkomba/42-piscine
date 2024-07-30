/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 20:12:45 by gkomba            #+#    #+#             */
/*   Updated: 2024/02/02 20:30:06 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	save;
	int	*localle;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	save = max - min;
	localle = (int *)malloc(save * sizeof(int));
	if (!localle)
	{
		*range = 0;
		return (-1);
	}
	*range = localle;
	i = 0;
	while (i < save)
	{
		localle[i] = min + i;
		i++;
	}
	return (save);
}
