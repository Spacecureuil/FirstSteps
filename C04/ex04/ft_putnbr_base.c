/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 10:47:45 by pmaury            #+#    #+#             */
/*   Updated: 2021/01/23 15:34:21 by pmaury           ###   ########.fr       */
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
	char	str[33];
	long	nbr_abs;

	i = 32;
	len = ft_strlen(base);
	if (verif_base(len, base))
		return ;
	if (nbr == 0)
		str[i--] = base[0];
	nbr_abs = (long)nbr;
	nbr_abs = nbr_abs < 0 ? -nbr_abs : nbr_abs;
	while (nbr_abs)
	{
		str[i--] = base[nbr_abs % len];
		nbr_abs /= len;
	}
	if (nbr < 0)
		str[i--] = '-';
	write(1, &str[i + 1], 32 - i);
}
