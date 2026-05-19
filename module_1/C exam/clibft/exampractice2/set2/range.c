#include <stdlib.h>

int     *ft_range(int start, int end)
{
    unsigned int len = 0;
    unsigned int i = 0;
    int *arr;
    if (start > end)
        len = (start -end) +1;
    else 
        len = (end-start) +1;
    arr = (int *)malloc(sizeof(int) *len);
    if(!arr)
        return (NULL);
    while (i < len)
    {
        arr[i] = start;
        if (start > end)
            start--;
        else 
            start++;
        i++;
    }
    return arr;
}