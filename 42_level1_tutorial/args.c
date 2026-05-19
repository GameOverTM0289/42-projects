#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac > 1)
		write(1, av[1], 15);
	write(1, "\n", 1);
	return (0);
}

// ac = argument count
// av = argument vector
// av[0] = program name
// av[1] = first real argument
// av[1][0] = first character of first argument