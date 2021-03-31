/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:26:29 by pmaury            #+#    #+#             */
/*   Updated: 2021/03/30 11:26:33 by pmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;

	if (ptr = (unsigned char *)malloc(sizeof(size) * nmemb) == NULL)
		return (0);
	ft_bzero(ptr, nmemb);
	return ((void *)ptr);
}
