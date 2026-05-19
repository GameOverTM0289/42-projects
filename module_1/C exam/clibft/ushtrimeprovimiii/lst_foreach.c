#include <stdio.h>

typedef struct s_list
{
    struct s_list *next;
    void           *data;
}       t_list;

void    lst_foreach(t_list*begin_list, void (*f)(void *))
{
    while (begin_list)
    {
        (*f)(begin_list->data);
        begin_list = begin_list->next;
    }
}
