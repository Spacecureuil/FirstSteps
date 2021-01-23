/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 13:24:26 by pmaury            #+#    #+#             */
/*   Updated: 2021/01/20 14:24:01 by pmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int maj;

	i = 0;
	while (str[i])
	{
		maj = 1;
		while ((str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= '0' && str[i] <= '9') ||
				(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((str[i] >= 'a' && str[i] <= 'z') && (maj == 1))
			{
				str[i] = str[i] - 32;
				maj = 0;
			}
			else if ((str[i] >= 'A' && str[i] <= 'Z') && (maj == 0))
				str[i] = str[i] + 32;
			else
				maj = 0;
			i++;
		}
		i++;
	}
	return (str);
}
