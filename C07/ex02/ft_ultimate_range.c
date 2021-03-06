/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 10:11:47 by pmaury            #+#    #+#             */
/*   Updated: 2021/01/29 10:41:28 by pmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;

	if (min >= max)
		return (0);
	i = 0;
	*range = malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (0);
	while (min + i < max)
	{
		range[0][i] = min + i;
		i++;
	}
	return (i);
}

int		main(void)
{
	int		*range;
	int		i;

	i = 0;
	printf("return : %d\n", ft_ultimate_range(&range, -5, 50));
	while (i < 55)
	{
	printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
