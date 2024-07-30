/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 22:50:28 by gkomba            #+#    #+#             */
/*   Updated: 2024/01/21 14:25:42 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	save;
	int	aux;

	while (size >= 0)
	{
		aux = 0;
		while (aux < size -1)
		{
			if (tab[aux] > tab[aux + 1])
			{
				save = tab[aux];
				tab[aux] = tab[aux + 1];
				tab[aux + 1] = save;
			}
			aux++;
		}
		size--;
	}
}
