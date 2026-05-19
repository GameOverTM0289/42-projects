#include <unistd.h>

int swap(int *a, int *b) {
    int tmp;
    
    tmp = *a;
    *a = *b;
    *b = tmp;

}