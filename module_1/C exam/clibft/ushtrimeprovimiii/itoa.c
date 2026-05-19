#include <stdlib.h>

int count_len(long nbr)
{
    int count = 0;
    if(nbr <= 0)
        count ++;
    while(nbr!= 0)
    {
        nbr /= 10;
        count++;
    }
    return count;
}

char *itoa(int nbr)
{
    int i;
    long num = nbr;
    int len = count_len(num);
    char *str=malloc(len +1);
    if(!str)
        return NULL;
    str[len] = '\0';
    i = len -1;
    if(num< 0)
    {
        str[0] = '-';
        num = -num;
    }
    while(num > 9)
    {
        str[i] = (num %10) + '0';
        num /= 10;
        i--;
    }
    str[i]= num + '0';
    return str;
}