/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:54:38 by pmaury            #+#    #+#             */
/*   Updated: 2021/01/19 10:22:52 by pmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int rev_i;
	int temp;

	i = 0;
	rev_i = size - 1;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[rev_i];
		tab[rev_i] = temp;
		i++;
		rev_i--;
	}
}
