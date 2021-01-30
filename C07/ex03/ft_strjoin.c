/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 10:11:36 by pmaury            #+#    #+#             */
/*   Updated: 2021/01/30 15:35:45 by pmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (0);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (i < size)
	{
		j += ft_strlen(strs[i]);
		i++;
	}
	j = j + (ft_strlen(sep) * (size - 1));
	if (!(str = malloc(sizeof(char) * j)))
		return (NULL);
	i = 0;
	str[0] = 0;
	while (i <= size)
	{
		ft_strcat(str, strs[i]);
		if (i != size)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

#include <stdio.h>

int		main(int ac, char **av)
{
	printf("%s\n", ft_strjoin(ac - 2, &av[1], "-"));
	return (0);
}
