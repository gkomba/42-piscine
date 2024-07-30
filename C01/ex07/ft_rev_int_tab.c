/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 13:46:16 by gkomba            #+#    #+#             */
/*   Updated: 2024/01/20 19:50:16 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	copy;
	int	end;

	start = 0;
	end = size - 1;
	while (start < size / 2)
	{
		copy = tab[start];
		tab[start] = tab[end];
		tab[end] = copy;
		start++;
		end--;
	}
}
