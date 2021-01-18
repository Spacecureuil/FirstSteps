/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 08:55:33 by pmaury            #+#    #+#             */
/*   Updated: 2021/01/18 13:36:07 by pmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char src[] = "C'est bon les frites !";
	char dest[100];

	ft_strcpy(dest, src);
	printf("chaine vaut : %s\n", src);
	printf("copie vaut : %s\n", dest);
	return (0);
}
