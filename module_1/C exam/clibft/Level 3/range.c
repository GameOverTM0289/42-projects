#include <unistd.h>

int *range(int start, int end)
{
    int len;
    int *arr;
    int i = 0;

    if (start <= end)
        len = end -start;
    else
        len = start - end;

    arr = malloc(sizeof(int) * (len+ 1));
    if (!arr)
        return (NULL);
    
    while (i < len)
    {
        arr[i] = start;
        if (start < end)
            start++;
        else
            start--;
        i++;
    }
    return arr;
}//joesakte