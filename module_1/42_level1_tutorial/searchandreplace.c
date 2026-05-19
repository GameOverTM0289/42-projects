#include <unistd.h>

int	main(int ac, char **av)
{
	int	 i = 0;
	char c;

	if (ac == 4 && !av[2][1] && !av[3][1])
	{
		while (av[1][i])
		{
			c = av[1][i];
			if (c == av[2][0])
				c = av[3][0];
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
