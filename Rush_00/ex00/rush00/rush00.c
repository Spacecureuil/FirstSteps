/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoigno <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 14:15:14 by vmoigno           #+#    #+#             */
/*   Updated: 2021/01/16 14:58:15 by vmoigno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush00(int x, int y)
{
	int h;
	int	l;

	h = 1;
	while (h <= y)
	{
		l = 1;
		while (l <= x)
		{
			if ((h == 1 && l > 1 && l < x) || (h == y && l > 1 && l < x))
				ft_putchar('-');
			else if ((l > 1 && l < x) && (h > 1 && h < y))
				ft_putchar(' ');
			else if ((l == 1 && h > 1 && h < y) || (l == x && h > 1 && h < y))
				ft_putchar('|');
			else
				ft_putchar('o');
			l++;
		}
		ft_putchar('\n');
		h++;
	}
}
