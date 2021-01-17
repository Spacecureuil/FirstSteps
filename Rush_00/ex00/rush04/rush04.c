/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 14:28:13 by pmaury            #+#    #+#             */
/*   Updated: 2021/01/16 14:45:48 by pmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush_04(int x, int y)
{
	int h;
	int l;

	h = 1;
	while (h <= y)
	{
		l = 1;
		while (l <= x)
		{
			if ((l == 1 && h == 1) || (l == x && h == y))
				ft_putchar('A');
			else if ((l == x && h == 1) || (l == 1 && h == y))
				ft_putchar('C');
			else if ((l > 1 && l < x) && (h > 1 && h < y))
				ft_putchar(' ');
			else
				ft_putchar('B');
			l++;
		}
		ft_putchar('\n');
		h++;
	}
}
