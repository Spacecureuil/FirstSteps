/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 09:59:22 by pmaury            #+#    #+#             */
/*   Updated: 2021/01/18 13:44:55 by pmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return dest;
}

int main()
{
	char src[] = "C'est bon les frites !";
	char dest[100];

	ft_strncpy(dest, src);
	printf("chaine vaut : %s\n", src);
	printf("copie vaut : %s\n", dest);
	return (0);
}
