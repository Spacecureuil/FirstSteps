int	ft_sqrt(int nb)
{
	int b;
	int temp;

	temp = nb;
	b = 0;
	while (nb >= 0)
	{
		nb -= b;
		b++;
		nb -= b;
	}
	b--;
	if (b * b == temp)
		return (b);
	else
		return (0);
}

#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d", ft_sqrt(atoi(av[1])));
	return (0);
}