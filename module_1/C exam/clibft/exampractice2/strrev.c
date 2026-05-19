#include <unistd.h>

char    *ft_strrev(char *str)
{
    char    tmp;
    int len = 0;
    int i = 0;
    while (str[len])
        len++;
    len--;

    while (i < len)
    {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        i++;
        len--;
    }
    return (str);
}