/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 15:43:05 by pmaury            #+#    #+#             */
/*   Updated: 2021/01/31 11:50:47 by pmaury           ###   ########.fr       */
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
		++i;
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

int		count_word()
{

}

int		count_word_len()
{

}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		words;
	char	**tab;

	char tab = (char)malloc(sizeof(char*) * (words + 1);
	tab[words] = 0;
	while (str[i])
	{
    if (is_separator(str[i]) == 0)
		{
        int len = count_word_len(&str[i]);
        tab[j++] = strndup(&src[i], len); 
	    i += len;
    	}
    else 
		i++;
}
return (tab);
}

int		is_word(char c, char cbefore, char *charset)
{
	return (!is_separator(c, charset) && is_separator(cbefore, charset));
}

int		get_words_count(char *str, char *charset)
{
	int	words_count;
	int	i;

	i = 0;
	words_count = 0;
	while (str[i] != '\0')
	{
		if (is_word(str[i], str[i - 1], charset) ||
			(!is_separator(str[i], charset) && i == 0))
			words_count++;
		i++;
	}
	return (words_count);
}

int		*get_words_size(char *str, char *charset)
{
	int	index;
	int	i;
	int	words_count;
	int	*words_size;

	i = 0;
	words_count = get_words_count(str, charset);
	words_size = malloc(words_count * sizeof(int));
	while (i <= words_count)
	{
		words_size[i] = 0;
		i++;
	}
	i = 0;
	index = 0;
	while (str[i] != '\0')
	{
		if (!is_separator(str[i], charset))
			words_size[index]++;
		else if (i > 0 && !is_separator(str[i - 1], charset))
			index++;
		i++;
	}
	return (words_size);
}

char	**ft_split(char *str, char *charset)
{
	char	**words;
	int		i;
	int		j;
	int		index;
	int		*words_size;

	words = malloc((get_words_count(str, charset) + 1) * sizeof(char*));
	words_size = get_words_size(str, charset);
	index = 0;
	j = 0;
	i = -1;
	while (str[++i] != '\0')
	{
		if (!is_separator(str[i], charset))
		{
			if (i == 0 || is_word(str[i], str[i - 1], charset))
				words[index] = malloc(words_size[index] * sizeof(char));
			words[index][j] = str[i];
			words[index][++j] = '\0';
		}
		else if (i > 0 && !is_separator(str[i - 1], charset) && ++index)
			j = 0;
	}
	words[get_words_count(str, charset)] = 0;
	return (words);
}
<<<<<<< HEAD
=======

#include <stdio.h>

int		main(int ac, char **av)
{
	if (ac == 3)
		printf("%ls \n", ft_split(av[1], av[2]));
	return (0);
}

//is_separator
//strndup ->  split
>>>>>>> cd18396b84dec66049a2e9817702a86c69da690f
