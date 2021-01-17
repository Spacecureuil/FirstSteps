/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 14:14:51 by pjacob            #+#    #+#             */
/*   Updated: 2021/01/16 14:45:55 by pjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush02(int x, int y)
{
	int h;
	int l;

	h = 1;
	while (h <= y)
	{
		l = 1;
		while (l <= x)
		{
			if ((l == 1 && h == 1) || (l == x && h == 1))
				ft_putchar('A');
			else if ((l == 1 && h == y) || (l == x && h == y))
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
