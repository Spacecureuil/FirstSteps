#include <unistd.h>

void 	ft_putnbr(int nb)
{
	int a;

	a = nb % 10 + '0';
	if (nb / 10)
		ft_putnbr(nb / 10);
	write(1, &a, 1);
}