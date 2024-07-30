/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:49:36 by gkomba            #+#    #+#             */
/*   Updated: 2024/02/02 07:18:01 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*localle;

	if (min >= max)
		return (0);
	range = max - min;
	localle = (int *)malloc(range * sizeof(int));
	if (!localle)
		return (0);
	i = 0;
	while (i < range)
	{
		localle[i] = min + i;
		i++;
	}
	return (localle);
}
