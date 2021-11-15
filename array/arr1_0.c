#include <stdio.h>

int main() {
    int List[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        printf("%d %d\n", i, List[i]);
    }

    printf("===================================\n");

    for (int j = 0; j < 5; j++) {
        printf("Tab[%d] = %d\n", j , List[j]);
    }
    return 0;
}