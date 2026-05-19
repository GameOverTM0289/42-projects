#include <stdlib.h>

int *rrange(int start, int end)
{
    int len =0;
    int i = 0;
    int *arr;
if (start > end)
    len = start -end +1;
else 
    len = end -start +1;

arr = malloc(sizeof(int ) * len);
if(!arr)
    return (NULL);

while(i < len)
    {
        arr[i] = end;
        if (start > end)
            end++;
        else 
            end --;
        i++;
    }
    return arr;
}