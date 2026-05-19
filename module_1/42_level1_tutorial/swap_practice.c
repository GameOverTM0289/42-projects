#include <stdio.h>

void swap(int *x, int *y) {
    int tmp;

    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main() {
    int a = 2;
    int b = 4;
    printf("Before: a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("Before: a=%d, b=%d\n", a, b);
}