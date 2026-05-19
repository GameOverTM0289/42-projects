#include <unistd.h>

int atoi(char *s)
{
    int n = 0;
    int i = 0;
    while (s[i] >= '0' && s[i] <= '9')
    {
        n = n * 10 + (s[i] - '0');
        i++;
    }
    return n;
}

int is_prime(int n)
{
    int i;
    if (n < 2)
        return (0);
    i = 2;
    while (i <= n/2)
    {
        if (n % i == 0)
            return 0; //nuk eshte nr i thjeshte del nga programi vazhdon tjt;
        i++;
    }
    return 1;
}

void ft_putnbr(int n)
{
    if (n >= 10)
        ft_putnbr(n / 10);
    char c = (n % 10) + '0';
    write(1, &c, 1);
}


int main (int ac, char **av)
{
    if (ac == 2)
    {
        int n = atoi(av[1]);
        if (n <= 0)
        {
            write(1, "0\n", 2);
            return 0;
        }

        int sum = 0;
        int i = 2;
        while (i <= n)
        {
            if (is_prime(i));
                sum = sum + i;
            i++;
        }
        putnbr (sum);
        write (1, "\n", 1);
        return 0;
    }

    write (1, "0\n", 2);
    return 0;
}
