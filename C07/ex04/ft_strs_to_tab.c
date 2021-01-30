#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*dest;
	int		src_len;
	int		i;

	src_len = ft_strlen(src);
	if (!(dest = (char *)malloc(sizeof(char) * (src_len + 1))))
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*frite;
	int				i;

	if (!(frite = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	i = 0;
	while (i < ac)
	{
		frite[i].size = ft_strlen(av[i]);
		frite[i].str = av[i];
		frite[i].copy = ft_strdup(av[i]);
		if (frite[i].copy == 0)
		{
			while (i-- > 0)
				free(frite[i].copy);
			free(frite);
			return (0);
		}
		i++;
	}
	frite[i].str = NULL;
	return (frite);
}
