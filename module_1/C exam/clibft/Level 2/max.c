#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    unsigned int i;
    int vl_max;

    if (len == 0)
        return (0);
    
    vl_max= *tab;
    (while len--)
    {
        tab++;
        if (*tab > vl_max)
            vl_max = *tab;
    }
    return (vl_max);
}

int max (int *tab, unsigned int len)
{
    int max;
    unsigned int i;

    if (len == 0)
    return (0);

    i = 1;
    max = tab[0];
    while (i < len)
    {
        if (tab[i] > max)
        max = tab[i];
    i++;
    }
    return (max);
}
