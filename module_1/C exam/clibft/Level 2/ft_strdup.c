char    *ft_strdup(char *src)
{
    char *dest;
    int i = 0;
    int j = 0;
    int len;

    while (src[len])
        len++;
    dest = malloc(len + 1);
    if (!dest)
        return (NULL);
    while (src[i])
    {
        dest[j] = src[i]
        i++;
        j++;
    }
    dest[j] = '\0';
    return (dest);
}
