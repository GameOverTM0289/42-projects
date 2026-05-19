#include <unistd.h>

int is_space(char c)
{
    if (c == ' ' || c == '\t')
        return 1;
    return 0;
}

int main(int ac, char **av)
{
    int i = 0;
    int word = 0;

    if (ac == 2)
    {
        // skip leading spaces/tabs
        while (is_space(av[1][i]))
            i++;

        while (av[1][i])
        {
            // print 3 spaces BEFORE each word except the first
            if (word && !is_space(av[1][i]))
                write(1, "   ", 3);

            // print current word
            while (av[1][i] && !is_space(av[1][i]))
            {
                write(1, &av[1][i], 1);
                i++;
                word = 1;
            }

            // skip spaces between words
            while (is_space(av[1][i]))
                i++;
        }
    }

    write(1, "\n", 1);
    return 0;
}