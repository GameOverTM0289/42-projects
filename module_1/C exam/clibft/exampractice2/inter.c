#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;
    if (ac == 3)
    {
        i =0;
        while (av[1][i])
        {
            int k = 0;
            while (k < i && av[1][i] != av[1][k])
                k++;
            if( k == i)
            {
                j=0;
                while (av[2][j])
                {
                    if(av[1][i] == av[2][j])
                        {
                            write(1, &av[1][i], 1);
                            break;
                        }
                    j++;
                }
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}
