/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prime.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:03:57 by pmaury            #+#    #+#             */
/*   Updated: 2021/01/26 09:13:16 by pmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_is_prime(int nb)
{
    int    i;

    i = 3;
    if (nb == 2)
        return (1);
    if (nb < 2 || nb % 2 == 0)
        return (0);
    while (i <= nb / i)
    {
        if (nb % i == 0)
            return (0);
        i += 2;
    }
    return (1);
}

#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d", ft_is_prime(atoi(av[1])));
	return (0);
}
