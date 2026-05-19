#include <unistd.h>

int alr_seen(char *s, char c, int limit)
{
    int i = 0;
    while (i < limit)
    {
        if (s[i] == c)
            return (1);
        i++;
    }
    return (0);
}

