#include <unistd.h>

int main (int ac, char **av)
{
    char c;
    int i = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            c = av[1][i];
            if ((c >= 'a' && c<'z') || (c >= 'A' && c< 'Z'))
                c += 1;
            else if(c == 'z' || c == 'Z')
                c -=25;
            write (1, &c, 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}
