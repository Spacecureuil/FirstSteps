/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex07.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:11:43 by pmaury            #+#    #+#             */
/*   Updated: 2021/01/18 15:13:14 by pmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr(int nb);

int 	main(void)
{
	printf("le premier test est 42 : ");
	ft_putnbr(42);
	printf("\nle second test est 0 : ");
	ft_putnbr(0);
	printf("\nle dernier test est -42 : ");
	ft_putnbr(-42);
	return (0);
}
