#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    if (ac == 3)
    {
        while(av[1][i])
        {
            int k = 0;
            while (k < i && av[1][i] != av[1][k])
                k++;
            if(k == i)
            {
                int j = 0;
                while(av[2][j])
                {
                    if (av[2][j] == av[1][i])
                       { write(1, &av[1][i], 1);
                    break;}
                    j++;
                }
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}