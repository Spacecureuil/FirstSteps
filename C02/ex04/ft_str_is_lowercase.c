/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 10:26:56 by pmaury            #+#    #+#             */
/*   Updated: 2021/01/18 10:44:04 by pmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str)
	{
		if (str = 0)
			return (1);
		if (str[i] >= 'a' && str[i] <= 'z')
			return (1);
		return (0);
	}
}
