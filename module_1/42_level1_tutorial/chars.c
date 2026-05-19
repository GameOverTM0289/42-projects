#include <unistd.h>

int	main(void)
{
	char	str[] = "abc";

	write(1, &str[0], 1);
	write(1, "\n", 1);
	write(1, &str[1], 1);
	write(1, "\n", 1);
	write(1, &str[2], 1);
	write(1, "\n", 1);
	return (0);
}