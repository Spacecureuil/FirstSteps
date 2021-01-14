#include <unistd.h>

void	ft_print_comb2(void)
{
	char a;
	char b;

	a = '0';
	while (a <= '8')
	{
		b = a + 1;
		while (b <= '9')
		{
			{
				write(1, &a, 1);
				write(1, &b, 1);
			}
			b++;
		}
		a++;
	}
}