/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 10:47:45 by pmaury            #+#    #+#             */
/*   Updated: 2021/01/23 09:30:56 by pmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		count_c(char *str, char c)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (str[i])
	{
		res += (str[i] == c) ? 1 : 0;
		i++;
	}
	return (res != 1);
}

int		verif_base(int len, char *base)
{
	int i;

	i = 0;
	if (len < 2)
		return (1);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || count_c(base, base[i]))
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		len;
	int		nbr_cpy;
	char	str[33];

	i = 32;
	len = ft_strlen(base);
	nbr_cpy = nbr;
	if (verif_base(len, base))
		return ;
	if (nbr == 0)
		str[i--] = base[0];
	while (nbr)
	{
		str[i--] = base[nbr % len];
		nbr = nbr / len;
	}
	if (nbr_cpy < 0)
		str[i--] = '-';
	write(1, &str[i + 1], 32 - i);
}
