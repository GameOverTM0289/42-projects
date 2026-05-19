#include <unistd.h>

void	ft_putnbr(int n)
{
	char c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	(void)argv;

	int count = argc - 1;

	if (count == 0)
		write(1, "0\n", 2);
	else
	{
		ft_putnbr(count);
		write(1, "\n", 1);
	}
	return 0;
}
