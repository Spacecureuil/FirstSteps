/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 09:47:17 by pmaury            #+#    #+#             */
/*   Updated: 2021/01/23 16:51:17 by pmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < (n - 1) && s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(to_find);
	while (str[i])
	{
		if (ft_strncmp(str + i, to_find, len) == 0)
			return (str + i);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%s \n", ft_strstr(av[1], av[2]));
		printf("%s \n", strstr(av[1], av[2]));
	}
	return (0);
}
