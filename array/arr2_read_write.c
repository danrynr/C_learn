#include <stdio.h>

int main() {
    int Tab[5];
    int i;

    /*read the tab*/
    for (i = 0; i < 5; i++) {
        scanf("%d", &Tab[i]);
    }

    /*write the tab*/
    for (i = 0; i <5; i++) {
        printf("Tab[%d]= %d ;", i, Tab[i]);
    }

    printf("\n");

    return 0;
}