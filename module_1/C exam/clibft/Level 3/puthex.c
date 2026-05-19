#include <unistd.h>

int atoi(char *s)
{
    int i = 0;
    int n = 0;
    while (s[i] >= '0' && s[i] <= '9')
    {
        n = n * 10 + (s[i] - '0');
        i++;
    }
    return (n);
}

void puthex(unsigned int n)
{
    char *base = "0123456789abcdef";
    if (n >= 16)
        puthex(n/16);
    char c = base[n % 16];
    write (1, &c, 1);
}

int main (int ac, char **av)
{
    if (ac == 2)
    {
        unsigned int n = atoi(av[1]);
        puthex(n);
    }
    write(1, "\n", 1);
    return (0);
}