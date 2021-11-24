#include <stdio.h>

void plus1 (int* a) {
    int temp;
    *a += 1;
}

void plusd (int* a, int d) {
    int temp;
    *a += d;
}

void swap (int* a, int* b) {
    int temp;
    temp = (*a);
    *a = (*b);
    *b = temp;
}

int main() {
    int i = 9;
    int x = 10;
    int y = 25;
    int d = 7;

    plus1(&i);
    printf("nilai i + 1: %d\n", i);

    i = 8;
    plusd(&i, d);
    printf("nilai i + 7: %d\n", i);

    plusd(&d, 3);
    printf("nilai x dan y: %d, %d\n", x, y);
    swap(&x, &y);
    printf("nilai x dan y setelah swap: %d, %d\n", x, y);
    return 0 ;
}