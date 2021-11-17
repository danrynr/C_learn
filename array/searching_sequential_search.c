#include <stdio.h>

int main() {
    int i;
    int Tab[10] = {1, 50, 6, 200, 3, 100, 30, 8, 99, 100};
    int X = 8; /*untuk mencari*/

    i = 0;
    while ((Tab[i] != X) && (i < 9)) {
        i++;
    }

    if (Tab[i] == X) {
        printf("indeks bernilai X = %d", i);
    } else {
        printf("Nilai tidak ditemukan");
    }

    return 0;
}