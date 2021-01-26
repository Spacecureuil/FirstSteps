/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 13:50:21 by pmaury            #+#    #+#             */
/*   Updated: 2021/01/26 16:38:25 by pmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	while (src[len])
		len++;
	if (!(str = (char *)malloc(sizeof(str) * (len + 1))))
			return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

#include <stdio.h>
#include <string.h>

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%s \n", ft_strdup(av[1]));
		printf("%s", strdup(av[1]));
		return (0);
	}
}
