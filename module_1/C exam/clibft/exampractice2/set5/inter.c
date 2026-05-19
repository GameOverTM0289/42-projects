#include <unistd.h>

int main(int ac, char **av)
{
    int i , j, k;
    if(ac==3)
    {
        i = 0;
        while(av[1][i])
        {
            k = 0;
            while (k<i && av[1][i] != av[1][k])
                k++;
            if(i == k)
            {
                j = 0;
                while(av[2][j])
                {
                    if(av[2][j] == av[1][i])
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