int		max(int* tab, unsigned int len)
{
    int i = 1;
    int temp_max = 0;
    if (len == 0)
        return (0);
    while (i < len)
    {
        temp_max = tab[0];
        if (tab[i] > temp_max)
        {
            temp_max = tab[i];
            
        }
        i++;
    }
    return(temp_max);

}