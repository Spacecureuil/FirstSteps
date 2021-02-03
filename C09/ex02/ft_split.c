/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 15:43:05 by pmaury            #+#    #+#             */
/*   Updated: 2021/02/03 14:35:38 by pmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strndup(char *src, int n)
{
	int		i;
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * (n + 1))))
		return (0);
	i = 0;
	while (i < n)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int		count_words(char *str, char *charset)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] && is_separator(str[i], charset))
			i++;
		if (str[i])
		{
			words++;
			while (!(str[i] && is_separator(str[i], charset)))
				i++;
		}
	}
	return (words);
}

int		count_words_len(char *str, char *charset)
{
	int	len;

	len = 0;
	while (!is_separator(str[len], charset))
		len++;
	return (len);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		len;
	int		words;
	char	**tab;

	i = 0;
	j = 0;
	words = count_words(str, charset);
	if (!(tab = malloc((count_words(str, charset) + 1) * sizeof(char *))))
		return (0);
	tab[words] = 0;
	while (str[i])
	{
		if (str[i] && is_separator(str[i], charset) == 0)
		{
			len = count_words_len(&str[i], charset);
			while (tab[j++])
			{
				if (tab[j] == 0)
					return (NULL);
				tab[j] = ft_strndup(&str[i], len);
			}
			i += len;
		}
		else
			i++;
	}
	return (tab);
}

#include <stdio.h>

int		main(int ac, char **av)
{
	int		i;
	char	**split;

	i = 0;
	split = ft_split(av[1], av[2]);
	if (ac == 3)
	{
		while (split[i])
		{
			printf("%s \n", split[i]);
			i++;
		}
	}
	return (0);
}
