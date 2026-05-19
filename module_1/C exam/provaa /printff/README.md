*This project has been created as part of the 42 curriculum by aibro.*

# DESCRIPTION

`ft_printf` is a recreation of the standard C library function `printf`.  
It formats and prints data according to a specified format string and variable arguments.  
The project’s goal is to understand variadic functions, modular design, and formatted output handling without relying on the standard library’s internal implementation.

This custom implementation supports the following conversions:
- `%c` → Character  
- `%s` → String  
- `%p` → Pointer address (in hexadecimal, or `(nil)` if `NULL`)  
- `%d` / `%i` → Signed decimal integer  
- `%u` → Unsigned decimal integer  
- `%x` → Hexadecimal (lowercase)  
- `%X` → Hexadecimal (uppercase)  
- `%%` → Percent sign  

Each conversion is handled by a dedicated function for modularity and clarity.

## INSTRUCTIONS

Compilation
Clone or download the repository, ensure your `libft` folder is correctly linked, and run `make`
This will compile all source files and create libftprint.a

Testing

A sample main.c file is included for testing:

#include "ft_printf.h"
#include <stdio.h>  // for comparison

```c
int	main(void)
{
	char	c = 'A';
	char	*str = "world";
	int		n = -42;
	unsigned int	u = 42;
	int		hex = 255;
	void	*ptr = &n;
	int		count;

	// Test ft_printf
	ft_printf("Hello %s!\n", str);
	ft_printf("Char: %c | Int: %d | Unsigned: %u | Hex: %x | HEX: %X | Ptr: %p | Percent: %%\n",
		c, n, u, hex, hex, ptr);
	count = ft_printf("Printed %d characters total\n\n", 13);

	// Comparison with system printf
	printf("--- Real printf for comparison ---\n");
	printf("Hello %s!\n", str);
	printf("Char: %c | Int: %d | Unsigned: %u | Hex: %x | HEX: %X | Ptr: %p | Percent: %%\n",
		c, n, u, hex, hex, ptr);
	printf("Printed %d characters total\n", count);

	return (0);
}

```
Before compiling to test, add this line to the makefile at the very bottom:

```c
test: all
	$(CC) main.c $(NAME) $(LIBFT_DIR)/libft.a -o test && ./test

```
You can compile and run both libraries together with:

`make test` 

You should see output similar to:

```c
Hello !
Char: A | Int: -42 | Unsigned: 42 | Hex: ff | HEX: FF | Ptr: 0x7ffe... | Percent: %
Printed 13 characters total
```


### RESOURCES

[Variadic functions](https://www.geeksforgeeks.org/c/variadic-functions-in-c/) 
[Printf in C](https://www.geeksforgeeks.org/c/printf-in-c/)
[C Standard Library](https://en.cppreference.com/w/c/io/fprintf)

AI USAGE - AI, in this case Chatgpt, was solely used as a faster alternative to regularly search for minor troubleshooting, testing and as a learning tool by the author.