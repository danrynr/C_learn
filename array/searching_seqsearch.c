#include <stdio.h>

int main() {
    int i, c;
    int Tab[] = {1, 50, 6, 300, 200, 3, 100, 30, 100, 8, 99, 100, 6, 5, 6, 100, 300, 1, 50};
    int X;

    size_t n = sizeof(Tab);

    printf("Isi angka yang ingin dicari: ");
    scanf("%d", &X);

    i = 0;
    while ((Tab[i] != X) && (i < n)) {
        i++;
    }

    for (c = 0; c < n; c++) {
        if (Tab[c] == X) {
            printf("'%d' muncul pada indeks %d\n", X, c);
        }
    }


    if (Tab[i] == X) {
        printf("indeks yang bernilai '%d' = %d", X, i);
    } else {
        printf("Nilai tidak ditemukan");
    }

    return 0;
}