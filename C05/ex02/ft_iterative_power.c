/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:38:54 by pmaury            #+#    #+#             */
/*   Updated: 2021/01/24 14:32:12 by pmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int temp;

	temp = nb;
	if (power < 1)
		return (power == 0);
	while (power > 1)
	{
		nb *= temp;
		power--;
	}
	return (nb);
}
