/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:00:35 by gkomba            #+#    #+#             */
/*   Updated: 2024/02/06 08:00:39 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_index(char c, char *base);
int		ft_atoi_base(char *str, char *base);
int		ft_nbrlen(long nbr, int base_len);
char	*ft_putnbr(long nbr, char *base, int nb_size);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_checkbase(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (!str[i])
		return (0);
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		if (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
			return (0);
		while (j < i)
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nb;
	int		nb_size;
	char	*result;

	if (!ft_checkbase(base_from) || !ft_checkbase(base_to)
		|| ft_strlen(base_from) <= 1 || ft_strlen(base_to) <= 1)
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	nb_size = ft_nbrlen(nb, ft_strlen(base_to));
	result = ft_putnbr(nb, base_to, nb_size);
	return (result);
}
