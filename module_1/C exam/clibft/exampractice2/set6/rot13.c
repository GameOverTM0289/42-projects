#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    if(ac == 2)
    {
        while(av[1][i])
        {
            char c = av[1][i];
            if(c && ((c>= 'a' && c <= 'm') || (c>= 'A' && c <= 'M')))
                c += 13;
            else if((c && ((c>= 'n' && c <= 'z') ||( c>= 'N' && c <= 'Z'))))
                c -= 13;
            write(1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}