#include <stdlib.h>
#include <unistd.h>

// ft_rrange: returns array from end → start (inclusive)
int *rrange(int start, int end)
{
    int len;
    int *arr;
    int i = 0;

    // calculate length (inclusive)
    if (start <= end)
        len = end - start + 1;
    else
        len = start - end + 1;

    arr = malloc(sizeof(int) * len);
    if (!arr)
        return (NULL);

    // fill array from end → start
    while (i < len)
    {
        arr[i++] = end;
        if (start > end)
            end++;    // counting down
        else
            end--;    // counting up
    }
    return arr;
}

// simple putnbr for testing
void putnbr(int n)
{
    if (n >= 10)
        putnbr(n / 10);
    char c = n % 10 + '0';
    write(1, &c, 1);
}

// print array for testing
void print_array(int *arr, int len)
{
    int i = 0;
    while (i < len)
    {
        putnbr(arr[i]);
        write(1, " ", 1);
        i++;
    }
    write(1, "\n", 1);
}

// main: test rrange
int main(void)
{
    int start = 3;
    int end = 5;

    int len = (start <= end) ? end - start + 1 : start - end + 1;
    int *arr = rrange(start, end);

    if (arr)
    {
        print_array(arr, len);
        free(arr);
    }

    return 0;
}
