#include <unistd.h>

int	already_seen(char *s, char c, int max_index)
{
	int	i = 0;
	while (i < max_index)
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 3)
	{
		i = 0;
		// Print from first string
		while (av[1][i])
		{
			if (!already_seen(av[1], av[1][i], i))
				write(1, &av[1][i], 1);
			i++;
		}

		// Print from second string
		j = 0;
		while (av[2][j])
		{
			// check if it’s in first string OR already printed in second
			i = 0;
			while (av[1][i] && av[1][i] != av[2][j])
				i++;
			if (!av[1][i] && !already_seen(av[2], av[2][j], j))
				write(1, &av[2][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
