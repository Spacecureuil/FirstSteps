#include <stdio.h>

void	ft_is_negative(int n);

int 	main(void)
{
	printf("le premier test est 42 : ");
	ft_is_negative(42);
	printf("\nle second test est 0 : ");
	ft_is_negative(0);
	printf("\nle dernier test est -42 : ");
	ft_is_negative(-42);
	return (0);
}