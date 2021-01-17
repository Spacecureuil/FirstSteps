/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 11:51:43 by pjacob            #+#    #+#             */
/*   Updated: 2021/01/16 12:23:51 by pjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
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
				ft_putchar('/');
			else if ((l == x && h == 1) || (l == 1 && h == y))
				ft_putchar('\\');
			else if ((l > 1 && l < x) && (h > 1 && h < y))
				ft_putchar(' ');
			else
				ft_putchar('*');
			l++;
		}
		ft_putchar('\n');
		h++;
	}
}
