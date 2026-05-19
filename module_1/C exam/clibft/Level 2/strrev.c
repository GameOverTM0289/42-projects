char    *ft_strrev(char *str)
{
    char temp;
    int len = 0;
    int i = 0;
    while (str[len])
        len++;
    while (i < len - 1)
    {
        temp = str[i];
        str[i] = str[len - 1];
        str[len - 1] = temp;
        i++;
        len--;
    }
    return (str);
}
