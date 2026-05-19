
size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    int j;
    int check = 0;
    while (s[i])
    {
        j = 0;
        while (accept[j])
        {
            if (s[i] == accept[j])
                check = 1;
            j++;
        }
        if (check == 0)
            return (i);
        i++;
    }
    return (i);
}