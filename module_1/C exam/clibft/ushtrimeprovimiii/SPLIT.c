#include <stdlib.h>
#include <stdio.h>

int is_space(char *c)
{
    return (c == '\t' || c == ' ' || c == '\n');
}

int count_word(char *s)
{
    int i = 0;
    int count = 0;

    while (s[i])
    {
        while (s[i] && is_space(s[i]))
            i++;
        if(s[i] && !is_space(s[i]))
        {
            count += 1;
            while (s[i] && !is_space(s[i]))
                i++;
        }
    }
    return (count);
}

char *word_dup(char *s, int start, int end)
{
    int i = 0;
    int len = end -start;
    char *word;

    word = malloc(sizeof(char) * (len + 1));
    if (!word)
        return (NULL);
    while(start < end)
    {
        word[i] = s[start];
        i++;
        start++;
    }
    word[i] = '\0';
    return (word);
}


char **split(char *s)
{
    int i = 0;
    int j = 0;
    int start;
    char **array;

    if(count_word(s) == 0)
        return (NULL);
    while(s[i])
    {
        while(s[i] && is_space(s[i]))
            i++;
        start = i;
        while(s[i] && !is_space(s[i]))
            i++;
        if(i > start)
        {
            array[j++] = word_dup(s, start, i);
        }
    }
    array[j] = NULL;
    return (array);
}