minclude <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *rev_print(char *str)
{
	int i;

	i = ft_strlen(str);
	while (i--)
		write(1, &str[i], 1);
	return (str);
}

int	main(void)
{
	rev_print("rainbow dash");
	write(1, "\n", 1);
	rev_print("cant touch this");
	write(1, "\n", 1);
	return (0);
}
