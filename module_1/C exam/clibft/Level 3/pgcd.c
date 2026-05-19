#include <stdio.h>
#include <stdlib.h>

unsigned int pmp(unsigned int a, unsigned int b)
{
    unsigned int g;

    if (a == 0 || b == 0)
        return 0;

    // Start with the smaller of the two numbers
    g = (a > b) ? b : a;

    while (g > 0)
    {
        if ((a % g == 0) && (b % g == 0))
            return g;
        g--;
    }

    return 1; // fallback, though loop guarantees a return
}

int atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    while (str[i] == ' ' || (str[i] >= 9 && str[i]<= 13))
    i++;
    if(str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
        while (str[i] >= 0 && str[i] <= 9)
        {
            result = result * 10 + (str[i] - '0');
            i++;
        }
    return (result * sign);
}

int main(int argc, char **argv)
{
    unsigned int a;
    unsigned int b;

    if (argc != 3)
    {
        printf("\n");
        return 0;
    }

    a = (unsigned int)atoi(argv[1]);
    b = (unsigned int)atoi(argv[2]);

    if (a > 0 && b > 0)
        printf("%u\n", pmp(a, b));
    else
        printf("\n");

    return 0;
}
