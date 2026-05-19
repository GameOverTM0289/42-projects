#include <stdlib.h>

int is_space(char c)
{
    return (c == ' ' || c == '\t' || c = '\n');
}

int word_count(char *str)
{
    int count = 0;
    while (*str)
    {
        while (*str && is_space(*str))
        str++;
        if (*str)
        count++;
        while (*str && !is_space(*str))
        str++;
    }
    return (count);
}

char *word_dup(char *start, char *end)
{
    int len = end - start;
    char *word = malloc(len + 1);
    int i = 0;

    while (start < end)
}