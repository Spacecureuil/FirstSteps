
#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	int	i;
	unsigned char	*d;

	i = 0;
	d = (unsigned char *)dest;
	while (i < len)
		d[i++] = (unsigned char)c;
	dest = (void *)d;
	return (dest);
}

void	*ft_memset(void *dest, int c, size_t len)
{
	while (len--)
		*((unsigned char*)dest++) = c;
	return (dest);
}