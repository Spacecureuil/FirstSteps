/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:43:39 by pmaury            #+#    #+#             */
/*   Updated: 2021/01/24 14:30:28 by pmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 1)
		return (power == 0);
	return (nb * ft_recursive_power(nb, power - 1));
}

#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%d \n", ft_recursive_power(atoi(av[1]), atoi(av[2])));
	return (0);
}
