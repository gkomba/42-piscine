/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 10:27:22 by gkomba            #+#    #+#             */
/*   Updated: 2024/01/21 13:44:21 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_col(int x, int esquerda, int meio, int direita)
{
	int	espaco_x;
	int	i;

	if (x > 0)
		ft_putchar(esquerda);
	espaco_x = x - 2;
	i = 0;
	while (i < espaco_x)
	{
		ft_putchar(meio);
		i++;
	}
	if (x > 1)
		ft_putchar(direita);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	espaco_y;
	int	i;

	if (x > 0 && y > 0)
		ft_print_col(x, '/', '*', '\\');
	espaco_y = y - 2;
	i = 0;
	while (i < espaco_y)
	{
		ft_print_col(x, '*', ' ', '*');
		i++;
	}
	if (y > 1 && x > 0)
		ft_print_col(x, '\\', '-', '/');
}
