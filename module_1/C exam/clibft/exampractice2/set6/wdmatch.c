#include <unistd.h>
#include <stdio.h>

int main (int ac, char **av)
{
    if (ac == 3)
    {
        int i = 0, j= 0;
        while (av[1][i])
        {
            while(av[2][j] && av[1][i] != av[2][j])
            {
                printf("sakt");
                j++;
                printf("sakt2");
            }
            printf("sakt3");
            if(!av[2][j])
            {
                printf("sakt4");
                write(1,"\n",1);
                return 0;
            }
            printf("sakt7");
            i++;
            printf("sakt6");
            j++;
            printf("sakt5");
        }
        printf("sakt8");
        while(av[1][i])
        {
            printf("sakt9");
            write(1, &av[1][i], 1);
            printf("sakt10");
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}
