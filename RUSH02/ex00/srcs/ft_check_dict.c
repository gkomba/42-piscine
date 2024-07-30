/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 18:34:16 by gkomba            #+#    #+#             */
/*   Updated: 2024/02/04 18:34:19 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_get_file_size(char *dictpath)
{
	char	c;
	int		file;
	int		count;

	file = open(dictpath, O_RDONLY);
	if (file == -1)
		return (-1);
	count = 0;
	while (read(file, &c, 1))
		count++;
	close(file);
	return (count);
}

int	ft_check_dict(char *dictpath)
{
	int	file;
	int	file_size;

	file = open(dictpath, O_RDONLY);
	if (file == -1)
		return (0);
	file_size = ft_get_file_size(dictpath);
	if (file_size == 0)
		return (0);
	close(file);
	return (1);
}
