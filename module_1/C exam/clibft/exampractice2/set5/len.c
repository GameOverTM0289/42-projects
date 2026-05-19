#include <unistd.h>

int len(char *str)
{
    int len = 0;
    while(str[len])
        len++;
    return len;
}