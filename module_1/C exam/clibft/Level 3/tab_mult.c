#include <unistd.h>

int atoi(char *s)
{
    int i = 0;
    int n= 0;
    while (s[i] >= '0' && s[i] <= '9')
    {
        n = n * 10 + (s[i] - '0');
        i++;
    }
    return (n);
}

void putnbr(int n)
{
    if (n >= 10)
        putnbr(n / 10);
    char c = (n % 10 )+ '0';
    write (1, &c, 1);
}

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int n = atoi(av[1]);
        int i = 1;
        while (i <= 9)
        {
            putnbr(i);
            write (1, " * ", 3);
            putnbr(n);
            write (1, " = ", 3);
            putnbr (i * n);
            write(1, "\n", 1);
        i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}