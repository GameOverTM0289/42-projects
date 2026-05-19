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

// a string is an array of chars ending with '\0'
// char * usually points to the first char of a string
// & means address of
// * means value at address