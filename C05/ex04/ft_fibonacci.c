/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:03:02 by pmaury            #+#    #+#             */
/*   Updated: 2021/01/26 09:03:10 by pmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int nb)
{
	if (nb < 0)
		return (-1);
	if (nb < 2)
		return (nb);
	return (ft_fibonacci(nb - 1) + ft_fibonacci(nb - 2));
}

#include <stdlib.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	if (ac == 2)
		printf("%d", ft_fibonacci(atoi(av[1])));
	return (0);
}
