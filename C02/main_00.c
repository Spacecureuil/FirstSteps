/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 10:40:42 by pmaury            #+#    #+#             */
/*   Updated: 2021/01/21 15:17:58 by pmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

it main()
{
	char src[] = "frite";
	char dest[100];
	unsigned int n = 3;
	ft_strncpy(dest, src, n);
	write(1, src, 5);
	write(1, dest, 5);
	//printf("chaine vaut : %s\n", src);
	//printf("copie vaut : %s\n", dest);
	return (0);
}
