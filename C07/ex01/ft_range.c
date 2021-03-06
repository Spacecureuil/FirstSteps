/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:22:15 by pmaury            #+#    #+#             */
/*   Updated: 2021/01/29 10:37:07 by pmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int i;

	if (min >= max)
		return (0);
	tab = malloc(sizeof(tab) * (max - min));
	i = 0;
	if (tab == NULL)
		return (0);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

#include <stdio.h>

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%n", ft_range(atoi(av[1]), atoi(av[2])));
		return (0);
	}
}
