#include <stdlib.h>

int  *range(int start, int end)
{
    int i = 0;
    int len;

    if (start > end)
        len = start - end +1;
    else 
        len = end - start + 1;

    int *arr=malloc(sizeof(int) * (len));
    if(!arr)
        return NULL;
    while (i < len)
    {
        arr[i] = start;
        if(start < end)
            start ++;
        else 
            start--;
        i++;
    }
    return arr;
}
